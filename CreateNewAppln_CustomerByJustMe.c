CreateNewAppln_CustomerByJustMe()
{
	
	/* Navigate to new application as a new customer */

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

/*Correlation comment - Do not change!  Original value='8810578662' Name ='c_FormId' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=c_FormId",
		"QueryString=$.payload.meta.id",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='e718de77-e0e2-48ab-a369-6f3f4b280b0e' Name ='c_CheckSecurityToken' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=c_CheckSecurityToken",
		"QueryString=$.payload.meta.securityToken",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_reg_find("Search=All",
		"Text=\"status\":\"open",
		LAST);

	lr_start_transaction("S01_T05_ClickNewApplication_ClickNewCustomer_ClickJustMe");

	web_custom_request("save", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?&formName=SaverAccount", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"welcome\":{\"tags\":\"[\\\"customer\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":null,\"surName\":null,\"dateOfBirth\":null,\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":null,\"Query\":null},\"middleName\":null},\"contactDetails\":{\"emailAddress\":null,\""
		"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":null,\"query\":null},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":null,\"streetName\":null,\"streetType\":{\"SelectedItem\":null,\""
		"Query\":null},\"poBox\":null,\"suburb\":null,\"state\":{\"SelectedItem\":null,\"Query\":null},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":null,\"dpid\":null,\"barcode\":null,\"isInternational\":false},\"isItPoBox\":null},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\""
		"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[null,null],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\""
		"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T05_ClickNewApplication_ClickNewCustomer_ClickJustMe",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}
