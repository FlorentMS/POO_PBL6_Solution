#include "pch.h"
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{ 
	return "SELECT [POO_PBL6_DB].[dbo].[Clients].[personID], [lastName], [firstName], [Adress] \
			FROM [POO_PBL6_DB].[dbo].[Clients] \
			LEFT JOIN [POO_PBL6_DB].[dbo].[Adresses] \
				ON [POO_PBL6_DB].[dbo].[Adresses].[personID] = [POO_PBL6_DB].[dbo].[Clients].[personID]";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO Clients (lastName, firstName) VALUES('" + this->nom + "','" + this->prenom + "');"
		+ " INSERT INTO Adresses (adress, personID) VALUES('" + this->adresse + "', @@IDENTITY);";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM Adresses\
			WHERE personID=" + this->Id + ";"
			+
			"DELETE FROM Clients\
			WHERE personID=" + this->Id + ";";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "UPDATE Clients \
			SET lastName='" + this->nom + "', \
				firstName='" + this->prenom + "' \
			WHERE personID=" + this->Id + ";"
			+
			"UPDATE Adresses \
			SET adress='" + this->adresse + "' \
			WHERE personID=" + this->Id + ";";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }
System::String^ NS_Comp_Mappage::CLmapTB::getAdresse(void) { return this->adresse; }