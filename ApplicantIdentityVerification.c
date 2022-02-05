ApplicantIdentityVerification()
{
	
	/* Give authorize to credit bureau to verify Applicant's identity */

	web_add_header("Origin", 
		"https://secure.amp.com.au");

/*Correlation comment - Do not change!  Original value='UuPzDYb5' Name ='c_VerificationId' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=c_VerificationId",
		"QueryString=$.payload.verificationId",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	lr_start_transaction("S01_T13_SelectCheckBoxToVerifyIdentityByCreditBureau_ClickOk");

	web_custom_request("register",
		"URL=https://secure.amp.com.au/ddc/public/api/green-id/register",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t77.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"title\":\"Mr\",\"firstName\":\"{p_FirstName}\",\"middleNames\":\"\",\"lastName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"email\":\"{p_EmailID}\",\"address\":{\"country\":\"AU\",\"state\":\"{c_StateCode}\",\"streetName\":\"{c_StreetName}\",\"flatNumber\":\"\",\"streetNumber\":\"{c_BuildingNumber}\",\"suburb\":\"{c_SubUrb}\",\"postcode\":\"{c_PostCode}\",\"streetType\":\"{c_StreetType}\",\"townCity\":\"\"},\"extraData\":[{\"name\":\"dnb-credit-header-consent-given\",\"value\":\"true\"}]}",
		LAST);

	web_add_header("Content-Type", 
		"application/json");

/*Correlation comment - Do not change!  Original value='d86d1ee104a9ba25946c4ae8045e6f05cda323a6' Name ='c_VerificationToken' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=c_VerificationToken",
		"QueryString=$.payload.verificationToken",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/token*",
		LAST);

	web_custom_request("token",
		"URL=https://secure.amp.com.au/ddc/public/api/green-id/token?verificationId={c_VerificationId}",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t78.inf",
		"Mode=HTML",
		"EncType=application/json",
		LAST);

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("getsources",
		"URL=https://simpleui-au.vixverify.com/df/getsources",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t79.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"accountId\":\"amp_au\",\"apiCode\":\"F2x-L5D-7wW-EY4\",\"verificationToken\":\"{c_VerificationToken}\",\"origin\":\"simpleui\"}",
		LAST);

	web_custom_request("getfields",
		"URL=https://simpleui-au.vixverify.com/df/getfields",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t80.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"accountId\":\"amp_au\",\"apiCode\":\"F2x-L5D-7wW-EY4\",\"verificationToken\":\"{c_VerificationToken}\",\"sourceId\":\"nswregodvs\",\"origin\":\"simpleui\"}",
		LAST);

	web_custom_request("log",
		"URL=https://simpleui-au.vixverify.com/df/log",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t81.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body=[{\"message\":\"Setting overrides\",\"overrides\":\"sessionCompleteCallback sessionCancelledCallback enableBackButtonWarning enableCancelButton \",\"verificationId\":\"\",\"verificationToken\":\"\",\"accountId\":\"\",\"version\":\"\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:07:728\"},{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"winHeight\":\"841\",\"docHeight\":\"6078\",\"winWidth\":\"1519\",\"docWidth\":\"1519\",\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"message\":\"Client Info\",\"verificationId\":\"\",\"verificationToken\":\"\",\"accountId\":\"\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:07:730\"},{\"message\":\"Entered show\",\"verificationId\":\"\",\"verificationToken\":"
		"\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:483\"},{\"message\":\"Entered handleStartSuccess\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:907\"},{\"accountId\":\"amp_au\",\"verificationToken\":\"{c_VerificationToken}\",\"attemptId\":\"\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"platform\":\"Windows\",\"message\":\"greenID Web - Start workflow point\",\"pointOfInterest\":\"HandleStartSuccess\",\"poiOrder\":\"10\",\"verificationId\":\"\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId"
		"\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:907\"},{\"message\":\"dl is the next source, with order 0\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"dl\",\"message\":\"Loading first source\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"dl\",\"message\":\"Entered getFields: \",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":"
		"\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"nswregodvs\",\"message\":\"Entered showFields Form: nswregodvs\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:11:778\"},{\"message\":\"Entered initiateSourceyThings: nswregodvs\",\"verificationId\":\"\",\"verificationToken\":\"{c_VerificationToken}\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:12:308\"}]",
		LAST);

	lr_end_transaction("S01_T13_SelectCheckBoxToVerifyIdentityByCreditBureau_ClickOk",LR_AUTO);

	lr_think_time(think_time);

	/* Applicant's identity verification */

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_start_transaction("S01_T14_ClickOnSkipIDCheck_ClickOk");

	web_custom_request("save_9",
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId={c_FormId}&checkSecurityToken={c_CheckSecurityToken}&formName=SaverAccount&checkDob={p_DOB}&checkName={p_SurName}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/",
		"Snapshot=t82.inf",
		"Mode=HTML",
		"EncType=application/json",
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"{p_FirstName}\",\"surName\":\"{p_SurName}\",\"dateOfBirth\":\"{p_DOB}\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\"contactDetails\":{\"emailAddress\":\"{p_EmailID}\",\"mobilePhone\":\"{p_MobileNo}\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"{c_AddressMoniker}\",\"query\":\"{c_ShortAddress}\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"s"
		"treetNumber\":\"{c_BuildingNumber}\",\"streetName\":\"{c_StreetType}\",\"streetType\":{\"SelectedItem\":\"{c_StreetType}\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"{c_SubUrb}\",\"state\":{\"SelectedItem\":\"{c_StateCode}\",\"Query\":\"{c_StateCode}\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"{c_PostCode}\",\"dpid\":\"{c_DPID_DID}\",\"barcode\":\"{c_Barcode}\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"{c_ShortAddress}\",\"{c_ShortAddress}\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primar"
		"ySourceOfWealth\":{\"SelectedItem\":\"WIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"sourceOfFundsForAccount\":{\"SelectedItem\":\"FIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"reasonForOpeningAccount\":{\"SelectedItem\":\"EB\",\"Query\":\"Everyday banking (e.g. regular deposits and withdrawals for everyday expenses)\"}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":\"{c_VerificationId}\",\"verificationStatus\":\"IN_PROGRESS\"}}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\n"
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

	lr_end_transaction("S01_T14_ClickOnSkipIDCheck_ClickOk",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}
