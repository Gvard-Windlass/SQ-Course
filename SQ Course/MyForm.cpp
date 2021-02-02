#include "MyForm.h"
#include <string>
#include "QuickSort.h"
#include "RndGenerator.h"
#include "BinarySearch.h"

/// <summary>
/// comment
/// </summary>
void SQCourse::MyForm::DisplayVector()
{
	QuickSort qs;

	RndGenerator generator(sizeSelector->Value);
	int from = System::Convert::ToInt32(inputFrom->Text);
	int to = System::Convert::ToInt32(inputTo->Text);

	std::vector<int> v = generator.GetRandomIntVector(from, to);
	qs.Sort(v, 0, v.size() - 1);

	for (std::size_t i = 0; i < v.size(); ++i) {
		Label^ lbl = gcnew Label();
		lbl->AutoSize = true;
		lbl->Text = v[i].ToString();
		flPanel1->Controls->Add(lbl);
	}
}

std::vector<int> SQCourse::MyForm::GetVector()
{
	QuickSort qs;

	std::vector<int> v = {};
	for each (Label ^ vectorValue in flPanel1->Controls)
	{
		v.push_back(System::Convert::ToInt32(vectorValue->Text));
	}
	qs.Sort(v, 0, v.size() - 1);

	return v;
}

void SQCourse::MyForm::SearchInVector()
{
	BinarySearch s;

	int n = System::Convert::ToInt32(nInput->Text);

	std::vector<int> foundAt = s.FindIndexes(GetVector(), n);

	if (foundAt.size() == 0) {
		lblResult->Text = "Not found";
		return;
	}

	System::String^ labelText = "";
	if (foundAt.size() == 1) {
		labelText = "Found at index ";
	}
	else {
		labelText = "Found at indexes: ";
	}

	lblResult->Text = labelText + VectorToString(foundAt);
}

System::String^ SQCourse::MyForm::VectorToString(std::vector<int> v)
{
	System::String^ s = "";
	for (const auto& value : v) {
		s += value.ToString() + ", ";
	}
	return s->Trim()->TrimEnd(',');
}
