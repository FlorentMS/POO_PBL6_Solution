#include "pch.h"
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ adresse)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnePersonne(System::String^ strId)
{
	System::String^ sql;

	int id = System::Convert::ToInt32(strId);

	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierUnePersonne(System::String^ strId, System::String^ nom, System::String^ prenom, System::String^ adresse)
{
	System::String^ sql;

	int id = System::Convert::ToInt32(strId);

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setId(id);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}
