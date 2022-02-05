LaunchHomePage()
{
	/* Launch AMP Home Page */

	/* In most of the screen navigating pages, few requests that starts with 
	"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=d78588b8-130f-48af-9195-a3d2211f5bf3.......................
	"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f....",
	are collectively picking all the other requests from each page and sending it to APM I guess for end user analysis. 
	When I tried to capture the dynamic values like Request ID, Session Id, etc, they were not found in the cookie of previous 
	requests during replay, though they were being captured from cookie during recording. Thus, I couldn't capture them. 
	However, all the business critical dynamic values are properly correlated and the script is working fine as expected. */

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_set_max_html_param_len("9999");

	web_reg_find("Text=AMP â\x80“ Banking, home loans, super, retirement &amp; financial advice", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

/*Correlation comment - Do not change!  Original value='1207548181' Name ='c_RpId' Type ='RecordReplay'*/
	web_reg_save_param_ex(
		"ParamName=c_RpId",
		"LB=desc=\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Headers",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  Original value='1643117181505' Name ='c_ModifiedSince' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=c_ModifiedSince",
		"LB/IC=lastModification=",
		"RB/IC=|dtVersion",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		LAST);

/*Correlation comment - Do not change!  Original value='61b218eca79bef95' Name ='c_AppID' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=c_AppID",
		"LB=yourir.info/",
		"RB=.js",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		LAST);

/*Correlation comment - Do not change!  Original value='6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q' Name ='c_RenderCaptchaID' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=c_RenderCaptchaID",
		"LB=render=",
		"RB='></script",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  Original value='cd4697ba1bc4a478' Name ='c_App' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=c_App",
		"LB/IC=|app=",
		"RB/IC=|rcdec",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/www.amp.com.au/*",
		LAST);

	lr_start_transaction("S01_T00_Launch_AMP_HomePage");

	web_url("amp.com.au", 
		"URL=https://amp.com.au/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

/*Correlation comment - Do not change!  Original value='6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y' Name ='c_Dblob' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=c_Dblob",
		"QueryString=$.d_blob",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/id*",
		LAST);

/*Correlation comment - Do not change!  Original value='70673313952007354231088583865990664449' Name ='c_MarketId' Type ='ResponseBased'*/
	web_reg_save_param_json(
		"ParamName=c_MarketId",
		"QueryString=$.d_mid",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/id*",
		LAST);

/*Correlation comment - Do not change!  Original value='70912296699880610371109647921389160147' Name ='c_Duuid' Type ='RecordReplay'*/
//?d_uuid=70912296699880610371109647921389160147"]
	web_reg_save_param_ex(
		"ParamName=c_Duuid",
		"LB=d_uuid=",
		"RB=\"]",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/id*",
		LAST);

	web_custom_request("id", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.5.2&d_fieldgroup=MC&d_rtbd=json&d_ver=2&d_orgid=11BA6EA55322342B0A490D44%40AdobeOrg&d_nsid=0&ts=1643723227362", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_-2D14_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9&svrid=-14&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=3930928174&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t3.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643723223018%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723227364%7C0%7Cdn%7C27%7Cxu%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DMC%26d_rtbd%3Djson%26d_ver%3D2%26d_orgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26d_nsid%3D0%26ts%3D1643723227362%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723227366e0m4912T-1z11I1%7Cxcs%7C4916%7Cxce%7C4924%2C3%7C4%7Cx%7Cxhr%7Cx%7C1643723232285%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26mid%3D{c_MarketId}%26ts%3D1643723232284%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723232186%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_2418$rpId={c_RpId}$url=https%3A%2F%2F"
		"www.amp.com.au%2F$title=$latC=1113$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323227148_865$v=10231211201155045$time=1643723236889",
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("delivery", 
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"requestId\":\"ab68d57bbd1f42f0aa8bf1c300656077\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics "
		"Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/\",\"referringUrl\":\"\"}},\"experienceCloud\":{\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"39897F9170DE4775-1AB111AF9C34427C\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"profileParameters\":{\"pageName\":\"home\"}}},\"prefetch\":{\"views\":[{\"profileParameters\":{\"pageName\":\"home\"}}]}}", 
		LAST);

	web_reg_find("Text=Adobe AudienceManager", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dest5.html", 
		"URL=https://ampserviceslimited.demdex.net/dest5.html?d_nsid=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("api.ipdata.co", 
		"URL=https://api.ipdata.co/?api-key=1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c30", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_2",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_-2D14_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9&svrid=-14&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=3733789258&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t7.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643723223018%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C8%7C_event_%7C1643723223018%7C_vc_%7CV%7C14903%5Epf%7CVCD%7C94%7CVCDS%7C2%7CVCS%7C15693%7CVCO%7C15693%7CVCI%7C0%7CVE%7C152%5Ep751%5Ep53640%5Eps%5Es...div.product-tile__image%7CS%7C14131%2C2%7C9%7C_event_%7C1643723223018%7C_wv_%7ClcpE%7CP%7ClcpSel%7Cdiv.hpb__des%3Ep%3Afirst-child%7ClcpS%7C45566%7ClcpT%7C14221%7ClcpU%7C-%7Cfcp%7C14066%7Cfp%7C14066%7Ccls%7C0.0002%7Clt%7C6722%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723227364%7C1643723237894%7Cdn%7C1132%7Cxu%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DMC%26d_rtbd%3Djson%26d_ver%3D2%26d_orgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26d_nsid%3D0%26ts%3D1643723227362%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723227366e0m4912T-3z1I1%7Cxcs%7C4916%7Cxce%7C4924%2C3%7C4%7Cx%7Cxhr%7Cx%7C1643723232285%7C1643723237894%7Cdn%7C1132%7Cxu%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fid"
		"%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26mid%3D{c_MarketId}%26ts%3D1643723232284%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723232286e0m5417T-2z11I1%7Cxcs%7C5499%7Cxce%7C5609%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723232186%7C1643723236893%7Cdn%7C26%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723232189e0m4714T-4z11I1%7Cxcs%7C4707%7Cxce%7C4707%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723237897%7C0%7Cdn%7C-1%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723237957%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2"
		"C2%7C7%7Cx%7Cxhr%7Cx%7C1643723238112%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fapi.ipdata.co%2F%3Fapi-key%3D1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c30%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C595%7Cxce%7C596%2C1%7C10%7C_event_%7C1643723223018%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_2418$rpId={c_RpId}$unload=xhr$tvn=%2F$tvt=1643723223018$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643723223018e2073f2074g2111h2111i2226j2145k2226l3037m3040u20812v20512w159935M{c_RpId}$ni=4g|7.25$di=1$rt=1-1643723223018%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb3058e0f2g131h131i1068j247k1068l1182m1265u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb3058e0f2g2h2i336j28k510l1050m1055u43675v43375w348255K1I11M-1105674006%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb3059e0f29g29h29i364j125k510l1051m1268u88342v88042w294660K1I12M54226"
		"6979%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb3059e0f418g418h418i1052j441k1054l1155m6116u11037v10737w48607K1I12M1922023617%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb3059e0f441g441h441i1052j508k1054l1155m6115u1273v973w2408K1I12M-2121197485%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb3059e0f0g0h0i0j0k1054l1154m1155u8810v8510w24519K1I12M52068919%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb3059e0f0g0h0i0j0k524l1050m1052u2480v2180w11909K1I11M1133817745%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb3060e0f365g365h365i1051j416k1053l1154m1155u5172v4872w38911K1I11M761272653%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb3060e0m11816I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb3060e0f0g0h0i0j0k10983l1"
		"1105m11626u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb3060e0f0g0h0i0j0k10982l11421m11629u205462v205162w205162A2E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb3060e0m11815I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb3060e0f0g0h0i0j0k10816l10853m11064u130826v130526w431873K1I12M-2119166934%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb3060e0f10981g11069h11069i11640j11104k11643l11812m11818u5737v5437w13188K1I12%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.5.2%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%3D11BA6EA55322342B0A490D44_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1643723227362%7Cb4348e0m4912T-3z1I1%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb4378e0m10499I12%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb4397e0m9534I9%7Chttps%3A%2F%2Ffonts.googleapis.com%"
		"2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb4397e0f1g118h118i4766j190k4767l9463m9471u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb4397e0f0g0h0i0j0k1l118m4760u2343v2043w10164I9M-1570890603%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb9171e0m4714T-4z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fid%3Fd_5Fvisid_5Fver%3D4.5.2%26d_5Ffieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44_2540AdobeOrg%26mid%3D{c_MarketId}%26ts%3D1643723232284%7Cb9268e0m5417T-2z1I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb14046e0f0g0h0i0j0k830l854m856u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Faa8fe13f4c832769bd0ab2ea7e247013.svg%7Cb14086e0f0g0h0i0j0k599l642m642u2855v2555w2555I9M2144880504%7Chttps%3A%"
		"2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb14087e0f0g0h0i0j0k599l695m815u356733v356433w356360A2E2F53640O596P276I9M-848517780%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb14088e0f0g0h0i0j0k602l703m795u71976v71676w73997A2E1F53640O596P276I9M1335298681%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cb14167e0f0g0h0i0j0k562l706m716u51131v50831w55789A2E1F675840O1920P440I7M1591522922%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FSuper1.svg%7Cb14167e0f0g0h0i0j0k586l695m707u3174v2874w2874I7M-1143048870%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Frelaxation.svg%7Cb14168e0f0g0h0i0j0k595l706m708u2137v1837w1837I7M-819759634%7Chttps%3A%2F%2Fapi.ipdata.co%2F%3Fapi-key%3D1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c"
		"30%7Cb15139e0m549z11I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb14080m1695A2I0%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb14080m1695A2I0$fd=j1.12.4$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$isUnload=1$latC=1113$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323227148_865$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$nV=1$nVAT=1$time=1643723238847",
		LAST);

	web_revert_auto_header("Origin");

	web_reg_find("Text=AMP â\x80“ Banking, home loans, super, retirement &amp; financial advice", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.amp.com.au", 
		"URL=https://www.amp.com.au/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("amp.asx",
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t9.inf",
		"Mode=HTML",
		LAST);

	web_revert_auto_header("Origin");

	web_url("amp.nzx",
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t10.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.asx_2",
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t11.inf",
		"Mode=HTML",
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("delivery_2",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t12.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"e5a463e9a43f4c79876b32d35dd30e58\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/\",\"referringUrl\":\"https://www.amp.com.au/\"}},\"id\":{\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"5E54090A9222F1BA-0A28CD26753F4993\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"profile"
		"Parameters\":{\"pageName\":\"home\"}}},\"prefetch\":{\"views\":[{\"profileParameters\":{\"pageName\":\"home\"}}]}}",
		LAST);

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.nzx_2",
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t13.inf",
		"Mode=HTML",
		LAST);

	web_reg_find("Text=reCAPTCHA", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("anchor",
		"URL=https://www.google.com/recaptcha/api2/anchor?ar=1&k={c_RenderCaptchaID}&co=aHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.&hl=en&v=dPctOHA2ifhWm5WzFM_B5TjT&size=invisible&cb=4vsui6rq4c26",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t14.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

/*Correlation comment - Do not change!  Original value='v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1' Name ='c_Sn' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=c_Sn",
		"LB=dtCookie=",
		"RB=;",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/NetPromoterScore*",
		LAST);

	web_url("NetPromoterScore", 
		"URL=https://www.amp.com.au/wps/gws/NetPromoterScore?pageId=amp%3A", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("rb_bf96747ztk_3",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=2603654517&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t16.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239344e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-1z11I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-2z11I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7C"
		"tvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-4z11I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-3z11I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244419e0m66T-5z11I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb164372"
		"3244421e0m251T-6z11I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_2418$rpId={c_RpId}$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$time=1643723249860",
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("versions",
		"URL=https://yourir.info/api/v5/versions?appID={c_AppID}&libVersion=1.11.6&st=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t17.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_4",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=2439366964&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239344e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-7z1I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-8z1I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flega"
		"cy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-10z1I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-9z1I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244419e0m66T-11z1I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctv"
		"trg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244421e0m251T-12z1I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C1643723250249%7Cdn%7C1233%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244693e0m5456T-13z11I1%7Cxcs%7C5556%7Cxce%7C5559%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643723249892%7C1643723250295%7Cdn%7C1235%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D{c_AppID}%26libVersion%3D1.11.6%26st%3D1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723250037e0m141T-14z11I1%7Cxcs%7C402%7Cxce%7C403%2C2%7C10%7Cx%7Cxhr%7Cx%7C1643723251155%7C1643723251461%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643723250312%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D843%26ssd%3D1%26scd%3D13%26vi%3D1643723250308%26"
		"ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723251157e0m304T-15z11I1%7Cxcs%7C306%7Cxce%7C306%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C11%7Cx%7Cxhr%7Cx%7C1643723251873%7C1643723258338%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D1561%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D1500%26rv%3D1%26tim%3D1643723251872%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd"
		"-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C6465%7Cxce%7C6465%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C12%7Cx%7Cxhr%7Cx%7C1643723254890%7C1643723258344%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D4578%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D3000%26rv%3D1%26tim%3D1643723254889%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C3454%7Cxce%7C3454%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C13%7C_o"
		"nload_%7C_load_%7C-%7C1643723258422%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_2418$rpId={c_RpId}$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$time=1643723260717",
		LAST);

	web_custom_request("rb_bf96747ztk_5",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=3059941604&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t22.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=s%7C7%7Cx%7Cxhr%7Cx%7C323227148_865%7C1643723238112%7C%7C%2F%7C1643723223018%2C1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C14%7C_event_%7C1643723238857%7C_vc_%7CV%7C5814%5Epc%7CVCD%7C3550%7CVCDS%7C2%7CVCS%7C19628%7CVCO%7C21577%7CVCI%7C0%7CVE%7C152%5Ep744%5Ep1296%5Eps%5Esdiv.media-block.image-template.cookie-ill%3Eimg.image-template%3Afirst-child%7CS%7C797%2C2%7C15%7C_event_%7C1643723238857%7C_wv_%7ClcpE%7CIMG%7ClcpSel%7C...ia-block.image-template%3Afirst-child%3Epicture.featured.resizable-image%3Afirst-child%3Eimg%3Anth-child...%7ClcpS%7C668144%7ClcpT%7C5953%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cfcp%7C5953%7Cfp%7C5953%7Ccls%7C0%7Clt%7C12331%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampserviceslimited."
		"tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239344e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-16z1I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-17z1I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-19z1I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fwps%2Fg"
		"ws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-18z1I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244419e0m66T-20z1I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244421e0m251T-21z1I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C1643723250249%7Cdn%7C1233%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Es"
		"k0%5Esh0%7Cxrt%7Cb1643723244693e0m5456T-22z1I1%7Cxcs%7C5556%7Cxce%7C5559%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643723249892%7C1643723250295%7Cdn%7C1235%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D{c_AppID}%26libVersion%3D1.11.6%26st%3D1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723250037e0m141T-23z1I1%7Cxcs%7C402%7Cxce%7C403%2C2%7C10%7Cx%7Cxhr%7Cx%7C1643723251155%7C1643723251461%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643723250312%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D843%26ssd%3D1%26scd%3D13%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7"
		"C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723251157e0m304T-24z1I1%7Cxcs%7C306%7Cxce%7C306%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C11%7Cx%7Cxhr%7Cx%7C1643723251873%7C1643723258338%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D1561%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D1500%26rv%3D1%26tim%3D1643723251872%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C6465%7Cxce%7C6465%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C12%7Cx%7Cxhr%7Cx%7C1643723254890%7C1643723258344%7Cdn%7C1244%7Cxu%7Chtt"
		"ps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D4578%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D3000%26rv%3D1%26tim%3D1643723254889%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C3454%7Cxce%7C3454%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C13%7C_onload_%7C_load_%7C-%7C1643723258422%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C16%7C_event_%7C1643723238857%7C_view_%7Csvn%7C%2F%7Csvt%7C1643723223018%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_2418"
		"$rpId={c_RpId}$domR=1643723258419$tvn=%2F$tvt=1643723238857$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a1b1643723238857e2f2g2h2i2j2k28l234m235o890p890q5564r19563s19565t19572u20812v20512w159935M{c_RpId}$ni=4g|7.25$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643723262050",
		LAST);

	web_custom_request("rb_bf96747ztk_6",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app={c_App}&crc=1746248468&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/",
		"Snapshot=t23.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2F$tvt=1643723238857$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|7.25$di=1$rt=1-1643723238857%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb398e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb398e0f0g0h0i0j0m0u43675v43375w348255K1I11M-1105674006%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb398e0f0g0h0i0j0m0u88342v88042w294660K1I12M542266979%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb398e0f0g0h0i0j0m0u11037v10737w48607K1I12M1922023617%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb398e0f0g0h0i0j0m0u1273v973w2408K1I12M-2121197485%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb398e0f0g0h0i0j0m0u8810v8510w24519K1I12M52068919%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs"
		".css%7Cb398e0f0g0h0i0j0m0u2480v2180w11909K1I11M1133817745%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb398e0f0g0h0i0j0k27l59m68u5172v4872w38911K1I11M761272653%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb398e0m0I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb399e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb399e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb399e0m0I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb399e0f0g0h0i0j0k27l50m75u130826v130526w431873K1I12M-2119166934%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb399e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e54"
		"0399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb449e0f0g0h0i0j0k298l326m329u12484v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb461e0m0I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb482e0m0I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb487e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-16z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb495e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb495e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb496e0f0g0h0i0j0m0u2343v2043w10164I9M-1570890603%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb510e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca2"
		"13fa88175f7d9ffaf.woff2%7Cb511e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb511e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb511e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb511e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb745e0m1T-17z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb750e0m5532I12%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb750e0m0I12%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D814987224454%3F%7Cb757e0f0g0h0i0j0k21l4774m4781u12243v11943w31896K1I12%7Chttps%3A%2F%2F"
		"sp.analytics.yahoo.com%2Fsp.pl%7Cb778e0m4753N3O1P1I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cb799e0f0g0h0i0j0m0u51131v50831w55789E1F675840O1920P440I7M1591522922%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FSuper1.svg%7Cb799e0f0g0h0i0j0m0u3174v2874w2874I7M-1143048870%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Frelaxation.svg%7Cb800e0f0g0h0i0j0m0u2137v1837w1837I7M-819759634%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FHome_2520loans.svg%7Cb800e0f0g0h0i0j0m0u3746v3446w3446I7M-1777842142%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FBanking1.svg%7Cb800e0f0g0h0i0j0m0u3376v3076w3076I7M1400897430%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fhand-and-coin.svg%7Cb800e0f0g0h0i0j0m0u1505v1205w1205I7M408813756%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fill"
		"ustrations%2Fpiggy-bank-clock.svg%7Cb800e0f0g0h0i0j0m0u2686v2386w2386I7M-963048168%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fsmart-money.svg%7Cb800e0f0g0h0i0j0m0u1948v1648w1648I7M1501333684%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FInvestments1.svg%7Cb800e0f0g0h0i0j0m0u2430v2130w2130I7M1181909166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fumbrella.svg%7Cb800e0f0g0h0i0j0m0u1615v1315w1315I7M-731300366%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643723239363%7Cb828e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-19z1I1M-2108586233%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Faa8fe13f4c832769bd0ab2ea7e247013.svg%7Cb832e0f0g0h0i0j0m0u2855v2555w2555I9M2144880504%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb832e0f0g0h0i0j0k1l1m3v356433w356360N3O596P276Q768R480I9M-848517780%7Chtt"
		"ps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb833e0f0g0h0i0j0k1l1m2v71676w73997N3O596P276Q488I9M1335298681%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb847e0m0I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb847e0m0K1I11%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb849e0m0I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb851e0m0I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb889e0m4648I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb891e0f0g0h0i0j0k3l4620m4644u689v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb892e0f6g6h6i4641j42k4646l4735m4736u594v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F"
		"22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb896e0f0g0h0i0j0k4641l4729m4731u788v488w824I12%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3D4vsui6rq4c26%7Cb5545e0m270F5208N1Bi0I4%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb5562e0m66T-20z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb5564e0m251T-21z1I1%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb5567e0f0g0h0i0j0k321l371m715u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb5573e0f0g0h0i0j0k55l186m241u1682v1382w1382E2F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb5644e0m5307A1N3I7%7Chttps%3A%2F%2Fwww.amp.com"
		".au%2Fwps%2Fgws%2FNetPromoterScore%3FpageId%3Damp_253A%7Cb5819e0f0g0h0i0j0k3l65m65u319v19w19T-18z1I1M1533221510%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Cb5836e0m5456T-22z1I1%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb5925e0m358I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb5925e0m5225I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb5925e0m5225I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb5927e0m362I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb5928e0f0g0h0i0j0k349l371m374u3459v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb5929e0f0g0h0i0j0k355l5022m5022u300I3%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb6235e0m5060I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb6238e0m5123I12%7Chttps%3A%2F%2Famp.d2.sc"
		".omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs62978943562986%7Cb6304e0m4649I7%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643723239746%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%7Cb6347e0m4832I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb11013e0m240I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb11013e0m349I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb11013e0m349I7%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D{c_AppID}%26libVersion%3D1.11.6%26st%3D1%7Cb11180e0m141T-23z1I1%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb11447e0m383I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb11448e0m383I12%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb11458e0m839I12%7Chttps%3A%2F%2F11035194.fls.doubleclick.net%2Factivityi%5Essrc%3D11035194%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D3010442771459%5Esgtm%3D2od1q0%5Esaui"
		"ddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11854c0d550e551f551g551h551i662j551k662l773m776u683v383w482Bi2I4%7Chttps%3A%2F%2F11030517.fls.doubleclick.net%2Factivityi%5Essrc%3D11030517%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D9903385081955%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11863c0d609e612f612g612h612i612j612k731l875m876u680v380w482Bi3I4%7Chttps%3A%2F%2F11034081.fls.doubleclick.net%2Factivityi%5Essrc%3D11034081%5Estype%3Dampmn0%5Escat%3Dpc_5Ftt00g%5Esord%3D6429398075117%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11871c0d711e712f712g712h712i712j712k712l838m841u683v383w482Bi4I4%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb12300e0m304T-24z1I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb12300e0m27I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb12301e0m61I12%7Chttps%3A%2F%2Ftrc-events.ta"
		"boola.com%2F1236555%2Flog%2F3%2Funip%7Cb13018e0m6463z11I1%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb17822e0m1664z11I1%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb19569e0m977K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb19581e0f0g0h0i0j0k2l71m71u1706v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb19654e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb20561e0m2611A1N3S2614I7$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643723264123",
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	lr_end_transaction("S01_T00_Launch_AMP_HomePage",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}