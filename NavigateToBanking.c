NavigateToBanking()
{
	
	/* Navigate To Banking */
	
	web_reg_find("Text=Banking - AMP Bank", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"97\", \"Chromium\";v=\"97\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_start_transaction("S01_T01_ClickOnBanking");

	web_url("banking", 
		"URL=https://www.amp.com.au/banking", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("0", 
		"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=d78588b8-130f-48af-9195-a3d2211f5bf3&sid=7c784480836511ecb938af507a963ec8&vid=7c7a99f0836511ec8d66cb32184140ff&vids=1&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("delivery_3",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t27.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"033494e917804f0a85481a8a0f6b6759\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking\",\"referringUrl\":\"https://www.amp.com.au/\"}},\"id\":{\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"5C0E1C7DAD491BA0-79673CE5256CE744\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\""
		"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking\"}}]}}",
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.nzx_3",
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t28.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("x-dtpc", 
		"2$324197256_54h5vTAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0e0");

	web_url("NetPromoterScore_2", 
		"URL=https://www.amp.com.au/wps/gws/NetPromoterScore?pageId=amp%3Abanking", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("rb_bf96747ztk_7",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app={c_App}&crc=711500242&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t30.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C1%7C_load_%7C_load_%7C-%7C1643724194351%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724197359%7C1643724198978%7Cdn%7C1231%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197361e0f1g25h25i529j56k529l1613m1614u2492v2192w6539T-1z11I1%7Cxcs%7C1618%7Cxce%7C1619%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724197639%7C1643724197749%7Cdn%7C1223%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197685e0f0g0h0i0j0k1l60m60u10070v9770w50111T-2z11I1M1467405377%7Cxcs%7C107%7Cxce%7C110%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724197688%7C1643724197735%7Cdn%7C1223%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%"
		"5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197692e0m1T-3z11I1%7Cxcs%7C45%7Cxce%7C47%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724199027%7C1643724204175%7Cdn%7C1293%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199030e0f0g0h0i0j0k1l5103m5107u320v20w20T-4z11I1M-592864609%7Cxcs%7C5131%7Cxce%7C5148%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724199057%7C1643724199153%7Cdn%7C1280%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199059e0m2T-5z11I1%7Cxcs%7C94%7Cxce%7C96%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724199060%7C1643724199227%7Cdn%7C1295%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199063e0m159T-6z11I1%7Cxcs%7C166%7Cxce%7C167%2C3%7C8%7CResizeObser"
		"ver%20loop%20limit%20exceeded%7C_error_%7C-%7C1643724199121%7C1643724199121%7Cdn%7C-1%2C4%7C9%7CError%7C_type_%7C-%7C1643724199123%7C1643724199123%7Cdn%7C-1%2C4%7C10%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C_location_%7C-%7C1643724199125%7C1643724199125%7Cdn%7C-1%2C4%7C11%7C1865%7C_ts_%7C-%7C1643724199126%7C1643724199126%7Cdn%7C-1%2C4%7C12%7C1%7C_source_%7C-%7C1643724199128%7C1643724199128%7Cdn%7C-1%2C2%7C13%7Cx%7Cxhr%7Cx%7C1643724204153%7C1643724205108%7Cdn%7C1302%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643724199192%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D613827%26ssd%3D2%26scd%3D81%26mrir%3Dto%26vi%3D1643724199184%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%7Csvt"
		"rg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724204156e0m952T-7z11I1%7Cxcs%7C955%7Cxce%7C955%7Crc%7C204%7Crm%7CNo%20Content$PV=1$rId=RID_-909487734$rpId=226671080$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=544$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$time=1643724205172",
		LAST);

	web_custom_request("rb_bf96747ztk_8",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app={c_App}&crc=4188049320&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t31.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=d%7C-1%7CBanking%7CC%7C-%7C323239286_168%7C1643724194335%7Chttps%3A%2F%2Fwww.amp.com.au%2F%7C%7C%7C%2F%7C1643723238857%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724194351%7C1643724205817%7Cdn%7C1303%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C15%7C_event_%7C1643724194351%7C_vc_%7CV%7C4666%5Epc%7CVCD%7C2591%7CVCDS%7C2%7CVCS%7C11730%7CVCO%7C12743%7CVCI%7C0%7CVE%7C1121%5Ep467%5Ep1599%5Eps%5Esdiv.ps%3Ediv%3Anth-child%282%29%7CS%7C3696%2C2%7C16%7C_event_%7C1643724194351%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg.banner-wrapper--rates-rhs%7ClcpS%7C875059%7ClcpT%7C9916%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C9916%7Cfp%7C9916%7Ccls%7C0%7Clt%7C5157%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724197359%7C1643724198978%7Cdn%7C1231%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Damps"
		"erviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197361e0f1g25h25i529j56k529l1613m1614u2492v2192w6539T-8z1I1%7Cxcs%7C1618%7Cxce%7C1619%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724197639%7C1643724197749%7Cdn%7C1223%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197685e0f0g0h0i0j0k1l60m60u10070v9770w50111T-9z1I1M1467405377%7Cxcs%7C107%7Cxce%7C110%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724197688%7C1643724197735%7Cdn%7C1223%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197692e0m1T-10z1I1%7Cxcs%7C45%7Cxce%7C47%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724199027%7C1643724204175%7Cdn%7C1293%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%"
		"7Cxrt%7Cb1643724199030e0f0g0h0i0j0k1l5103m5107u320v20w20T-11z1I1M-592864609%7Cxcs%7C5131%7Cxce%7C5148%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724199057%7C1643724199153%7Cdn%7C1280%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199059e0m2T-12z1I1%7Cxcs%7C94%7Cxce%7C96%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724199060%7C1643724199227%7Cdn%7C1295%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199063e0m159T-13z1I1%7Cxcs%7C166%7Cxce%7C167%2C3%7C8%7CResizeObserver%20loop%20limit%20exceeded%7C_error_%7C-%7C1643724199121%7C1643724199121%7Cdn%7C-1%2C4%7C9%7CError%7C_type_%7C-%7C1643724199123%7C1643724199123%7Cdn%7C-1%2C4%7C10%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C_location_%7C-%7C1643724199125%7C1643724199125%7Cdn%7C-1%2C4%7C11%7C1865%7C_ts_%7C-%7C1643"
		"724199126%7C1643724199126%7Cdn%7C-1%2C4%7C12%7C1%7C_source_%7C-%7C1643724199128%7C1643724199128%7Cdn%7C-1%2C2%7C13%7Cx%7Cxhr%7Cx%7C1643724204153%7C1643724205108%7Cdn%7C1302%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643724199192%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D613827%26ssd%3D2%26scd%3D81%26mrir%3Dto%26vi%3D1643724199184%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724204156e0m952T-14z1I1%7Cxcs%7C955%7Cxce%7C955%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C14%7C_onload_%7C_load_%7C-%7C1643724205814%7C1643724205817%7Cdn%7C1303%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5"
		"Esh0%2C1%7C17%7C_event_%7C1643724194351%7C_view_%7Csvn%7C%2F%7Csvt%7C1643723238857%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-909487734$rpId=226671080$domR=1643724205812$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724194351e3f4g40h40i1088j57k1088l2616m2619o4667p4667q4726r11461s11463t11466u20839v20539w161012M226671080$ni=4g|6.9$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=544$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724208684",
		LAST);

	web_custom_request("rb_bf96747ztk_9",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app={c_App}&crc=2452274923&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t32.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$rt=1-1643724194351%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb2648e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb2648e0f1g1h1i88j23k191l235m264u43675v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb2648e0f0g0h0i0j0k208l252m422u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb2648e0f109g109h109i207j137k212l258m491u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb2648e0f0g0h0i0j0k259l302m585u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb2648e0f137g137h137i258j169k263l302m303u8810v8510w24519K1I12M-19117380"
		"36%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb2648e0f87g87h87i190j87k196l241m253u2480v2180w11909K1I11M-1515373129%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb2648e0f108g108h108i195j108k197l255m259u5172v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb2648e0m1002I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb2649e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb2649e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb2649e0m588I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb2649e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb2"
		"649e0f0g0h0i0j0k523l567m573u130826v130526w431873K1I12M-938627940%7Chttps%3A%2F%2Fc.la1-c1-syd.salesforceliveagent.com%2Fcontent%2Fg%2Fjs%2F51.0%2Fdeployment.js%7Cb2649e0m1976K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb2967e0f270g324h324i590j339k590l1645m1658u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb2990e0m249I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb3003e0m237I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb3010e0f1g25h25i529j56k529l1613m1614u2492v2192w6539T-8z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb3011e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb3011e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb3011e0f0g0h0i0j0k1l21"
		"m22u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb3086e0f0g0h0i0j0m0u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb3087e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb3087e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb3087e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb3087e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb3087e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197"
		"812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D101251047083%3F%7Cb3237e0f2g72h72i296j90k94l488m488u12244v11944w31896K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FBanking1.svg%7Cb3250e0f0g0h0i0j0m0u3376v3076w3076I7M1400897430%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fhand-and-coin.svg%7Cb3250e0f0g0h0i0j0m0u1505v1205w1205I7M408813756%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fpiggy-bank-clock.svg%7Cb3250e0f0g0h0i0j0m0u2686v2386w2386I7M-963048168%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fsmart-money.svg%7Cb3250e0f0g0h0i0j0m0u1948v1648w1648I7M1501333684%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb3252e0f0g0h0i0j0k74l105m109u28019v27719w186470E1F870756O1519P590Q3840R1400I9M-305230292%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Ffinancial-hub%2Fmanage-my-money%2FMENU_5Fbuynowpaylater"
		"22.jpg.ampaurendition.1920.0.jpg%7Cb3259e0f0g0h0i0j0m0u180334v180034w182325I7M-929783390%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Ffinancial-hub%2Fmanage-my-money%2FMENU_5FLNY22.jpg.ampaurendition.1920.0.jpg%7Cb3259e0f0g0h0i0j0m0u146424v146124w148784I7M138881200%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FServices.svg%7Cb3259e0f0g0h0i0j0m0u7754v7454w7454I7M-670098857%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FFAQs.svg%7Cb3260e0f0g0h0i0j0m0u2870v2570w2570I7M1608639612%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FTools-and-calculators.svg%7Cb3260e0f0g0h0i0j0m0u2313v2013w2013I7M577022317%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724197432%7Cb3334e0f0g0h0i0j0k1l60m60u10070v9770w50111T-9z1I1M1467405377%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fcall-us.svg%7Cb3334e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A"
		"%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb3334e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb3334e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fget-advice.svg%7Cb3335e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb3341e0m1T-10z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb3344e0m1I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb3345e0m3I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb3345e0m0K1I11%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2Fkombi_5Fvan_5Fproduct_5Fpromo.jpg%7Cb3348e0f0g0h0i0j0k1l45m46u16097v15797w17703N3O493P276Q488I9M-1132135011%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb3353e0f0g0h0i0j0k25l177m1"
		"84u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fplaceholder%2FBusget_2520Planner_2520calculator_2520image.png.ampaurendition.1920.0.jpg%7Cb3373e0f0g0h0i0j0k3l159m166u72741v72441w85494I7M1245487009%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb3374e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb3384e0m6401N3O1P1I7%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb3654e0m7I12%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb3729e0m2I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb3730e0f0g0h0i0j0k1l1m2v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb3732e0f1g108h108i230j122k230l387m391u300I3%7Chttps%3A%2F%2Fconnect.facebook.net%2F"
		"en_5FUS%2Ffbevents.js%7Cb4652e0m1I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb4655e0m1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb4667e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb4667e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb4669e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fwps%2Fgws%2FNetPromoterScore%3FpageId%3Damp_253Abanking%7Cb4679e0f0g0h0i0j0k1l5103m5107u320v20w20T-11z1I1M-592864609%7Chttps%3A%2F%2Fd.la1-c1-syd.salesforceliveagent.com%2Fchat%2Frest%2FSystem%2FMultiNoun.jsonp%7Cb4697e0m5088I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb4708e0m2T-12z1I1%7Chttps%3A%2F%"
		"2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb4712e0m159T-13z1I1%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dww6vt7kjp5jf%7Cb4725e0m5065F5208N1Bi0I4%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb4761e0m5020A1N3I7%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs65232394709390%7Cb4791e0m79I7%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb4797e0m17I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb4807e0m5234I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb4809e0m6I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb4830e0m3I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4831e0m4957I7%7Chttps%3A%2F%2Fwww.facebook"
		".com%2Ftr%2F%7Cb4831e0m4957I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb4844e0m5932I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb4845e0m5909I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4873e0m4915I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4873e0m4915I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4874e0m4915I7%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs64958893837894%7Cb9791e0m32I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb9805e0m952T-14z1I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb9830e0f0g0h0i0j0k6l35m44u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643724199155%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%7Cb10043e0m218I7%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb100"
		"59e0m200I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb10059e0m200I12%7C11035194.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11035194%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D7403893969109%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10286c0d400e403f403g403h403i403j403k403l526m528u690v390w489Bi2I4%7C11030517.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11030517%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D5805542943965%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10295c0d392e394f394g394h394i394j394k394l517m518u690v390w489Bi3I4%7C11034081.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11034081%5Estype%3Dampmn0%5Escat%3Dpc_5Ftt00g%5Esord%3D399868901926%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10303c0d383e385f385g385h385i385j385k386l"
		"509m510u688v388w488Bi4I4%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb11464e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb11471e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb11472e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb11487e0m2830A1N3S2832I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724210730",
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("rb_bf96747ztk_10",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app={c_App}&crc=707742931&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking",
		"Snapshot=t33.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C18%7C_event_%7C1643724221562%7C_wv_%7CAAI%7C1%7CfIS%7C27178%7CfID%7C1$rId=RID_-909487734$rpId=226671080$domR=1643724205812$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724223571",
		LAST);

	lr_end_transaction("S01_T01_ClickOnBanking",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}
