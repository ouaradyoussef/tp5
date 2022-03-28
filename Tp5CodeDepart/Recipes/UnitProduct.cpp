#include <string>

#include "UnitProduct.h"

UnitProduct::UnitProduct(std::string name, std::string origin, int quantity, float price)
	: AbsProduct(name, origin), m_quantity(quantity), m_price(price)
{
}

AbsCatalogComponent * UnitProduct::clone(void) const 
{ 
	// � compl�ter pour construire un nouvel objet UnitProduct en appelant le constructeur de copie
	return nullptr; // � remplacer
}

void UnitProduct::setQuantityPrice(int quantity, float price)
{
	m_quantity = quantity;
	m_price = price;
}

float UnitProduct::getPrice() const
{ 
	return m_price; 
}

int UnitProduct::getQuantity() const 
{ 
	return m_quantity; 
}

std::ostream & UnitProduct::printToStream(std::ostream & o) const
{
	// � compl�ter pour imprimer sur un stream un produit vendu � l'unit�
	return o;
}
