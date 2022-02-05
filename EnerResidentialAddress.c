EnerResidentialAddress()
{
	/* Enter Applicant's Residential Address */
	
	int i, length;

	web_revert_auto_header("Origin");

	web_add_auto_header("Content-Type", 
		"application/json");

	web_add_auto_header("caller", 
		"saver-account");

	lr_start_transaction("S01_T08_SearchResidentialAddress_ClickOk");

	/* Function to capture the length of Residential Address and search it by each character */
	length = strlen(lr_eval_string("{p_Address}"));

	for (i = 1; i <= length; i++)
	{

		lr_save_var(lr_eval_string ("{p_Address}"),i, 0, "c_ShortAddress");
		    
		if(i == length)
	   	{
		   	web_reg_save_param_json(
			"ParamName=c_AddressMoniker",
			"QueryString=$.payload.QAPicklist.PicklistEntry[0].Moniker",
			SEARCH_FILTERS,
			"Scope=Body",
			LAST);
	   	}
	
		web_reg_find("Search=All",
			"Text=\"Prompt\":\"Enter search\",\"Total\":",
			LAST);
	
		lr_start_sub_transaction(lr_eval_string("S01_T08_SearchResidentialAddress_By_{c_ShortAddress}"), "S01_T08_SearchResidentialAddress_ClickOk");
	
		web_custom_request("Unit%2084%20George%20Street%2C%20BATHURST%20%20NSW%20%20279",
			"URL=https://secure.amp.com.au/ddc/public/api/qas/doSearch/AUS/{c_ShortAddress}?residentialOnly=true", 
			"Method=GET", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
			"Snapshot=t68.inf", 
			"Mode=HTML", 
			"EncType=application/json", 
			LAST);
		
		lr_end_sub_transaction(lr_eval_string("S01_T08_SearchResidentialAddress_By_{c_ShortAddress}"), LR_AUTO);
	
	}
	
	web_convert_param(
        "c_AddressEncoded",
        "SourceString={c_AddressMoniker}",
        "SourceEncoding=HTML",
        "TargetEncoding=URL",
         LAST );

/*Correlation comment - Do not change!  Original value='84' Name ='c_BuildingNumber' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_BuildingNumber",
		"QueryString=$.payload.DDC['Building number']",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='George' Name ='c_StreetName' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_StreetName",
		"QueryString=$.payload.DDC['Street (Name)']",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='St' Name ='c_StreetType' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_StreetType",
		"QueryString=$.payload.DDC['Street (Type)']",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='Bathurst' Name ='c_SubUrb' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_SubUrb",
		"QueryString=$.payload.DDC.Locality",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='NSW' Name ='c_StateCode' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_StateCode",
		"QueryString=$.payload.DDC['State code']",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='2795' Name ='c_PostCode' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_PostCode",
		"QueryString=$.payload.DDC.Postcode",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='46986746' Name ='c_DPID_DID' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_DPID_DID",
		"QueryString=$.payload.DDC.DPID/DID",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='1301011120302220211120333230332121013' Name ='c_Barcode' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_Barcode",
		"QueryString=$.payload.DDC['AUSBAR.']",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_custom_request("AUS%7C9a82b8a7-931e-4496-a026-b4baffaecacb%7C7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42", 
		"URL=https://secure.amp.com.au/ddc/public/api/qas/doGetAddress/AUS/{c_AddressEncoded}?partialAddress={c_ShortAddress}", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_revert_auto_header("Content-Type");

	web_revert_auto_header("caller");

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_custom_request("save_4",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":null,\"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"{c_Buil"
		"dingNumber}\",\"streetName\":\"{c_StreetName}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOf"
		"FundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
		"AMP Saver Account\\\\n"
		"This product includes\\\\n"
		"\\\\n"
		"A competitive savings rate\\\\n"
		"Easy online access to your money\\\\n"
		"The requirement to deposit at least $250 each month to receive the bonus interest rate\\\\n"
		"The ability to link your savings account to an everyday transaction account\\\\n"
		"\\\\n"
		"This product doesn\\xE2\\x80\\x99t include\\\\n"
		"\\\\n"
		"The bonus interest rate if you deposit less than $250 each month\\\\n"
		"A cheque book, Bank@Post or digital wallet facilities\\\\n"
		"No restriction on pay anyone amounts\\\\n"
		"\\\\n"
		"A target market determination for this product is available at www.amp.com.au/bank/tmd\\\\n"
		"The product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n"
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		LAST);

	lr_end_transaction("S01_T08_SearchResidentialAddress_ClickOk",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}
