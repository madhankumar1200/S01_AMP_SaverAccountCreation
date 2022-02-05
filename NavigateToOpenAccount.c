NavigateToOpenAccount()
{
	
	/* Click on Open Account */

	web_reg_find("Text=AMP Saver Account", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("S01_T04_ClickOnOpenAnAccount");

	web_url("saver-account", 
		"URL=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("0_4", 
		"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=05a97900-2fc2-405f-adb9-f1752a6abbf2&sid=7c784480836511ecb938af507a963ec8&vid=7c7a99f0836511ec8d66cb32184140ff&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_reg_find("Text=Login to My AMP - AMP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("ruxitagentjs_ICA27Vfghjqrux_10231211201155045.js", 
		"URL=https://secure.amp.com.au/wps/myportal/sec/ruxitagentjs_ICA27Vfghjqrux_10231211201155045.js", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("id_2",
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.6.0&d_fieldgroup=AAM&d_rtbd=json&d_ver=2&d_orgid=11BA6EA55322342B0A490D44%40AdobeOrg&d_nsid=0&d_mid={c_MarketId}&d_blob={c_Dblob}&ts=1643724732742",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t51.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded",
		LAST);

	web_custom_request("delivery_6",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t52.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"08ff0f057dcd435ea0c8e6410b0ce40a\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"secure.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"referringUrl\":\"https://www.amp.com.au/banking/savings-accounts/amp-saver-account\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"76109A75D5F94342-1A72C321BB83A283\",\"tr"
		"ackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"}}]}}",
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://secure.amp.com.au");

	web_url("api.ipdata.co_2", 
		"URL=https://api.ipdata.co/?api-key=1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c30", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=AMP Saver Account", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("saver-account_2", 
		"URL=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Login to My AMP - AMP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_reg_find("Search=Body",
		"Text=Login to My AMP - AMP",
		LAST);

	web_url("ruxitagentjs_ICA27Vfghjqrux_10231211201155045.js_2", 
		"URL=https://secure.amp.com.au/wps/myportal/sec/ruxitagentjs_ICA27Vfghjqrux_10231211201155045.js", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_custom_request("delivery_7",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://secure.amp.com.au/",
		"Snapshot=t56.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"af3bb2bed6a34f98a5e717978b355120\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"secure.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"referringUrl\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"40CEFC28B6674B1C-72DA9DFEB1E4E4A7\",\"trackingServe"
		"r\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"}}]}}",
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("DDO.portal-content.json", 
		"URL=https://www.amp.com.au/content/amp-secure/my-amp/ddc/saver-account/DDO.portal-content.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("_jcr_content.json", 
		"URL=https://www.amp.com.au/content/amp-secure/my-amp/ddc/saver-account/DDO/_jcr_content.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("_jcr_content.json_2", 
		"URL=https://www.amp.com.au/content/amp-secure/my-amp/ddc/access-account/DDO/_jcr_content.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://secure.amp.com.au");

	web_url("DDO.portal-content.json_2", 
		"URL=https://www.amp.com.au/content/amp-secure/my-amp/ddc/access-account/DDO.portal-content.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Login to My AMP - AMP", 
		LAST);

	web_add_auto_header("Content-Type", 
		"application/json");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("apiKey", 
		"Bearer df591ce84c2d12ad679bedb3e14c6ba");

	web_add_auto_header("caller", 
		"saver-account");

	web_custom_request("usersession", 
		"URL=https://secure.amp.com.au/services/secure/ddc/1.0.0/usersession", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Login to My AMP - AMP", 
		LAST);

	web_revert_auto_header("Content-Type");

	web_revert_auto_header("apiKey");

	web_revert_auto_header("caller");

	web_custom_request("usersession_2", 
		"URL=https://secure.amp.com.au/services/secure/ddc/1.0.0/usersession", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Content-Type", 
		"application/json");

	web_add_header("caller", 
		"saver-account");

	web_custom_request("countries", 
		"URL=https://secure.amp.com.au/ddc/public/api/refdata/countries", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S01_T04_ClickOnOpenAnAccount",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}
