#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservices(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		void ajouterUnePersonne(System::String^, System::String^, System::String^);
		void supprimerUnePersonne(System::String^);
		void modifierUnePersonne(System::String^, System::String^ nom, System::String^ prenom, System::String^ adresse);
	};
}