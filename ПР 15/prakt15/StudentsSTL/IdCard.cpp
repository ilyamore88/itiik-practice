
#include "IdCard.h"


	IdCard::IdCard(int n)
	 {
        number = n;
		category = "�� �����������";
	 }
	IdCard::IdCard()
	 {
        number = 0;
		category = "�� �����������";
	 }
	IdCard::IdCard(int n, string cat)
	 {
        number = n;
		category = cat;
	 }

    void IdCard::setNumber(int newNumber)
	{
        number = newNumber;
    }
    
	int IdCard::getNumber()
	{
        return number;
    }


	void IdCard::setCategory(string cat)
	{
		category = cat;
	}

	string IdCard::getCategory()
	{
		return category;
	}


