LearnMoreOnSaverAccount()
{
	
	/* Click On Learn More Under AMP Saver Account */

	web_reg_find("Text=AMP Saver Account - AMP", 
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

	lr_start_transaction("S01_T03_ClickOnLearnMore_UnderAMPSaverAccount_UnderProductSection");

	web_url("amp-saver-account", 
		"URL=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/banking/savings-accounts", 
		"Snapshot=t42.inf", 
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

	web_custom_request("0_3", 
		"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=ff5e7c4b-0f90-4eef-91ba-422aaff185bb&sid=7c784480836511ecb938af507a963ec8&vid=7c7a99f0836511ec8d66cb32184140ff&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.amp.com.au/banking/savings-accounts", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Origin");

	web_custom_request("delivery_5",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"da4169dae8064c4ba33903fb3508a100\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking/savings-accounts/amp-saver-account\",\"referringUrl\":\"https://www.amp.com.au/banking/savings-accounts\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"76BA93F56BF9DA7A-3B7D04782F4452A4\",\"trackingServ"
		"er\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}]}}",
		LAST);

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_14",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=4294028882&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t45.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=d%7C-1%7CLearn%20more%7CC%7C-%7C324369139_684%7C1643724556679%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%7C%7C%7C%2Fbanking%2Fsavings-accounts%7C1643724368533%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724556696%7C1643724561716%7Cdn%7C1357%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2C2%7C11%7C_event_%7C1643724556696%7C_vc_%7CV%7C990%5Epc%7CVCD%7C1195%7CVCDS%7C2%7CVCS%7C5078%7CVCO%7C6087%7CVCI%7C0%7CVE%7C1354%5Ep740%5Ep792%5Eps%5Esa.cookie-notification__btn-close%3Espan.amp-icon-cancel%3Afirst-child%7CS%7C863%2C2%7C12%7C_event_%7C1643724556696%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg%7ClcpS%7C963172%7ClcpT%7C1008%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C1008%7Cfp%7C1007%7Ccls%7C0.0731%7Clt%7C1044%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724557323%7C1643724557667%7Cdn%7C13"
		"04%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557326e0f1g45h45i174j115k175l295m296u1398v1098w2546T-1z11I1%7Cxcs%7C344%7Cxce%7C344%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724557592%7C1643724557709%7Cdn%7C1320%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557628e0f0g0h0i0j0k1l67m68u10070v9770w50111T-2z11I1M362168065%7Cxcs%7C114%7Cxce%7C117%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724557749%7C1643724557799%7Cdn%7C1322%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557754e0m1T-3z11I1%7Cxcs%7C47%7Cxce%7C50%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643724557882%7C1643724557987%7Cdn%7C1338%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fa"
		"pi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557969e0m1T-4z11I1%7Cxcs%7C103%7Cxce%7C105%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724557969%7C1643724557988%7Cdn%7C1338%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557972e0m1T-5z11I1%7Cxcs%7C18%7Cxce%7C19%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724558417%7C1643724558720%7Cdn%7C1355%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%252Fsavings-accounts%26tim%3D1643724557995%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%252Fsavings-accounts%26cv%3D20220129-3-RELEASE%26tos%3D842521%26ssd%3D4%26scd%3D81%26vi%3D1643724557988%26ri%3Dd1e0de780a477456bbe84b7a5ceb3687%26sd%3Dv2_ab8cc1e2063"
		"b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643724558_CIi3jgYQy7xLGKSd-azrLyADKAEwEDiu_...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C303%7Cxce%7C303%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643724558515%7C1643724559880%7Cdn%7C1355%7Cxu%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724558517e0m1362T-6z11I1%7Cxcs%7C1365%7Cxce%7C1365%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643724559880%7C1643724561716%7Cdn%7C1357%7Cxu%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724559882e0m1833T-7z11I1%7Cxcs%7C1836%7Cxce%7C1836%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C10%7C_onload_%7C_load_%7C-%7C1643724560173%7C1643724560176%7Cdn%7C1356%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C13%7C_event_%7C1643724556696%7C_view_%7Csvn%7"
		"C%2Fbanking%2Fsavings-accounts%7Csvt%7C1643724368533%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-399517870$rpId=-42293618$domR=1643724560171$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724556696e3f3g3h3i3j3k4l473m478o1013p1013q1032r3475s3477t3480u22245v21945w161079M-42293618$ni=4g|10$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=2$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724562982",
		LAST);

	web_custom_request("rb_bf96747ztk_15",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=2848283588&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t46.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|10$di=1$rt=1-1643724556696%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb503e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb503e0f0g0h0i0j0k14l39m42u43675v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb503e0f0g0h0i0j0m0u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb503e0f0g0h0i0j0k14l55m56u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb504e0f0g0h0i0j0k17l64m64u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb504e0f0g0h0i0j0k20l64m65u8810v8510w24519K1I12M-1911738036%7Chttps%3"
		"A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb504e0f0g0h0i0j0k20l20m24v2180w11909K1I11M-1515373129%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb504e0f0g0h0i0j0k20l24m24v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb505e0m536I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb505e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb505e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fwinning_5Fribbon_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j0k333l394m408u2551v2251w2251N3O80P80Q150R150I7M2023321959%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fcalendar_5Finvite_5Fdecline_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j"
		"0k337l414m421u1145v845w845N3O80P80Q150R150I7M-1653263229%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fpaperclip_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j0k341l421m422u1620v1320w1320N3O80P80Q150R150I7M1074679316%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb505e0f0g0h0i0j0k244l274m293u130826v130526w431873K1I12M-416139646%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb505e0m381I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb505e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb586e0f0g0h0i0j0k274l341m342u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb608e0m280I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb622e0m267I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb630e0f1g"
		"45h45i174j115k175l295m296u1398v1098w2546T-1z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb640e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb640e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb641e0f0g0h0i0j0k1l27m28u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb690e0f0g0h0i0j0m0u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb690e0f0g0h0i0j0m0u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb690e0f0g0h0i0j0m0u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb690e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.co"
		"m.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb691e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb691e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb691e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb691e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D920795069201%3F%7Cb841e0f46g59h59i195j69k84l430m431u12245v11945w31894K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724557381%7Cb932e0f0g0h0i0j0k1l67m68u10070v9770w50111T-2z1I1M362168065%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2F"
		"data%2Ficons%2Fcall-us.svg%7Cb932e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb933e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb933e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fget-advice.svg%7Cb933e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb935e0f0g0h0i0j0m0u28019v27719w186470E1F869460O1519P634Q3840R1400I9M-305230292%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemtYaGs126MiZpBA-UFUIcVXSCEkx2cmqvXlWqWuU6F.woff2%7Cb948e0f55g93h93i327j95k327l351m358u48136v47836w47836I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb990e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fconn"
		"ect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb995e0m74I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb999e0m1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb1014e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb1014e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC437f2575c2574fa1b6401b69d97f4744-source.min.js%7Cb1015e0f0g0h0i0j0k1l29m31u564v264w404I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb1017e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb1046e0m10I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb1048e0m7K1I11%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7C"
		"b1058e0m1T-3z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb1061e0m3I12%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb1095e0m176A1N3I7%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb1104e0m692N3O1P1I7%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb1109e0m3I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb1121e0m150I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb1125e0m2I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb1128e0m114I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb1273e0m1T-4z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb1276e0m1T-5z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs64836830226271%7Cb1288e0m26I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555"
		"%2Ftrc%2F3%2Fjson%7Cb1302e0m372I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb1303e0m2171I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb1305e0m3I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb1305e0f0g0h0i0j0k1l1m2v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb1308e0f1g297h297i431j316k432l597m597u300I3%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb1320e0m360I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1320e0m388I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1320e0m388I7%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dhecank325gm9%7Cb1698e0m247F5208N1Bi4I4%7Chttps%3"
		"A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb1717e0m1I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb1717e0m2I12%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb1724e0m300z11I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb1724e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb1725e0m1I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7C11035194.fls.doubleclick.net%2F..%2F.._5Ftt002%5Esord%3D1024228811222%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1786c0d347e351f351g351h351i351j351k351l462m466u710v410w528Bi0I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01k%5Esord%3D5359016372465%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref"
		"%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1798c0d335e339f339g339h339i339j339k339l449m453u707v407w528Bi1I4%7C11034081.fls.doubleclick.net%2F..%2F.._5Ftt00g%5Esord%3D1856080237196%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1808c0d324e328f328g328h328i328j328k328l439m442u710v410w528Bi2I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01a%5Esord%3D8128658426669%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1816c0d316e320f320g320h320i320j320k320l434m440u709v409w528Bi3I4%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Cb1821e0m1362T-6z1I1%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643724557809%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1909e0m245I7%7C"
		"https%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Cb3186e0m1833T-7z1I1%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb3477e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3483e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3485e0f0g0h0i0j0k0l0m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb3501e0m2771A1N3S2772I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724565031",
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("rb_bf96747ztk_16",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app={c_App}&crc=3664237637&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account",
		"Snapshot=t47.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C14%7C_event_%7C1643724574870%7C_wv_%7CAAI%7C1%7CfIS%7C18126%7CfID%7C1$rId=RID_-399517870$rpId=-42293618$domR=1643724560171$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|10$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724576876",
		LAST);

	lr_end_transaction("S01_T03_ClickOnLearnMore_UnderAMPSaverAccount_UnderProductSection",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}
