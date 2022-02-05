/* --------------------------------------------------------------------

Script Name: S01_AMP_SaverAccountCreation

Description: Navigation of end to end AMP Saver Account creation flow by entering applicant details without final submit.

Author: Madhankumar Subbiah

Initial Creation Date: 05/Feb/2022

Variables: 
				int i, length; - To handle address search.
				think_time - Defined a global think time to modify all occurrence at a single place.
Transactions:
				S01_T00_Launch_AMP_HomePage
				S01_T01_ClickOnBanking
				S01_T02_ClickOnSavingsAccount_UnderBankingPage
				S01_T03_ClickOnLearnMore_UnderAMPSaverAccount_UnderProductSection
				S01_T04_ClickOnOpenAnAccount
				S01_T05_ClickNewApplication_ClickNewCustomer_ClickJustMe
				S01_T06_ClickOnProceed_UnderImportantInfoSection
				S01_T07_EnterPersonalDetails_ClickOk
				S01_T08_SearchResidentialAddress_ClickOk
				S01_T09_EnterContactDetails_ClickOk
				S01_T10_ClickYesOnTFN_ClickOK
				S01_T11_Select_No_On_ForeignTaxResident_ClickOk
				S01_T12_SelectExtraDetailsFromTheDropDownRelatedToIncome_ClickOk
				S01_T13_SelectCheckBoxToVerifyIdentityByCreditBureau_ClickOk
				S01_T14_ClickOnSkipIDCheck_ClickOk
				S01_T15_SelectCheckBoxForDeclarations_ClickOk
				S01_T16_ClickCancelApplication

Revision History: N/A

 --------------------------------------------------------------------- */

vuser_init()
{
	return 0;
}
