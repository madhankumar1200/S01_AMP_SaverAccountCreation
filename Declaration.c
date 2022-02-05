Declaration()
{
	
	/* Applicant's declaration related to application */

	lr_start_transaction("S01_T15_SelectCheckBoxForDeclarations_ClickOk");

	web_custom_request("save_10",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t83.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":\"{p_EmailID}\",\"mobilePhone\":\"{p_MobileNo}\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"s"
		"treetNumber\":\"{c_BuildingNumber}\",\"streetName\":\"{c_StreetName}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true"
		",\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":\"WIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"sourceOfFundsForAccount\":{\"SelectedItem\":\"FIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"reasonForOpeningAccount\":{\"SelectedItem\":\"EB\",\"Query\":\"Everyday banking (e.g. regular deposits and withdrawals for everyday expenses)\"}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":\"{c_VerificationId}\",\"verificationStatus\":\"IN_PROGRESS\"}}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
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
		"\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":true,\"acceptTandCsDeclaration\":true,\"acceptCRSDeclaration\":true}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}",
		LAST);

	lr_end_transaction("S01_T15_SelectCheckBoxForDeclarations_ClickOk",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}
