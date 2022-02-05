NavigateToSavingsAccount()
{
	
	/* Navigate to Savings Account under Banking section */
	
	web_reg_find("Text=High Interest Saving Accounts - AMP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_start_transaction("S01_T02_ClickOnSavingsAccount_UnderBankingPage");

	web_url("savings-accounts", 
		"URL=https://www.amp.com.au/banking/savings-accounts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("delivery_4",
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=9718afa41c444baba0f511ec35ad6975&version=2.3.2",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t35.inf",
		"Mode=HTML",
		"EncType=text/plain",
		"Body={\"requestId\":\"49c6763e24834270a6906e81efe3dbb8\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking/savings-accounts\",\"referringUrl\":\"https://www.amp.com.au/banking\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"{c_MarketId}\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"{c_Dblob}\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"21AEA097CA3B1C8B-0C742F81F0746CC3\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"tra"
		"ckingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts\"}}]}}",
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("0_2", 
		"URL=https://bat.bing.com/actionp/0?ti=16012365&Ver=2&mid=8280baf4-1744-4f7d-954b-6baaad95bcb6&sid=7c784480836511ecb938af507a963ec8&vid=7c7a99f0836511ec8d66cb32184140ff&vids=0&evt=pageHide", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.asx_3",
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID={c_AppID}&liveness=delayed",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t37.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_11",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app={c_App}&crc=3087581382&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t38.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=d%7C-1%7CSavings%20accounts%7CC%7C-%7C324197256_54%7C1643724367512%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C%7C%7C%2Fbanking%7C1643724194351%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724368533%7C1643724373586%7Cdn%7C1286%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2C2%7C11%7C_event_%7C1643724368533%7C_vc_%7CV%7C1230%5Epc%7CVCD%7C1203%7CVCDS%7C2%7CVCS%7C5108%7CVCO%7C6119%7CVCI%7C0%7CVE%7C1121%5Ep467%5Ep1599%5Eps%5Esdiv.ps%3Ediv%3Anth-child%282%29%7CS%7C909%2C2%7C12%7C_event_%7C1643724368533%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg.banner-wrapper--rates-rhs%7ClcpS%7C875059%7ClcpT%7C2308%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C2308%7Cfp%7C2308%7Ccls%7C0%7Clt%7C962%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724369217%7C1643724369705%7Cdn%7C1242%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1"
		"%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369219e0f1g27h27i316j67k316l481m482u2706v2406w7447T-1z11I1%7Cxcs%7C488%7Cxce%7C488%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643724369330%7C1643724369392%7Cdn%7C1222%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369332e0m1T-2z11I1%7Cxcs%7C60%7Cxce%7C61%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724369380%7C1643724369536%7Cdn%7C1226%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369387e0f0g0h0i0j0k1l123m125u10070v9770w50111T-3z11I1M-159043271%7Cxcs%7C153%7Cxce%7C156%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643724369578%7C1643724370207%7Cdn%7C1277%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelay"
		"ed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369581e0m617T-4z11I1%7Cxcs%7C628%7Cxce%7C629%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724369582%7C1643724369703%7Cdn%7C1239%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369586e0m1T-5z11I1%7Cxcs%7C120%7Cxce%7C121%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724370215%7C1643724370515%7Cdn%7C1284%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%26tim%3D1643724369805%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%26cv%3D20220129-3-RELEASE%26tos%3D742981%26ssd%3D3%26scd%3D81%26vi%3D1643724369798%26ri%3Da50c78988635c1bdc994c3a3d67cba97%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643724370_CIi3jgYQy7x"
		"LGIbf7azrLyACKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96Q...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C299%7Cxce%7C299%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643724370302%7C1643724371699%7Cdn%7C1284%7Cxu%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724370306e0m1392T-6z11I1%7Cxcs%7C1397%7Cxce%7C1397%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643724371699%7C1643724373586%7Cdn%7C1286%7Cxu%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724371701e0m1885T-7z11I1%7Cxcs%7C1887%7Cxce%7C1887%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C10%7C_onload_%7C_load_%7C-%7C1643724372033%7C1643724372036%7Cdn%7C1285%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C13%7C_event_%7C1643724368533%7C_view_%7Csvn%7C%2Fbanking%7Csvt%7C1643724194351%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Es"
		"h0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-788520561$rpId=-1556384750$domR=1643724372031$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724368533e3f3g3h3i3j3k5l545m546o1004p1004q1053r3498s3500t3503u20204v19904w155695M-1556384750$ni=4g|6.9$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title=High%20Interest%20Saving%20Accounts%20-%20AMP$latC=2$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724374858",
		LAST);

	web_custom_request("rb_bf96747ztk_12",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app={c_App}&crc=1674882816&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t39.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$rt=1-1643724368533%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb575e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb575e0f0g0h0i0j0k1l1m3v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb575e0f0g0h0i0j0m0u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb575e0f0g0h0i0j0m0u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb575e0f0g0h0i0j0m0u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb575e0f0g0h0i0j0m0u8810v8510w24519K1I12M-1911738036%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2Fcli"
		"entLibraries%2Ficons-libs.css%7Cb575e0f0g0h0i0j0k1l1m2v2180w11909K1I11M-1515373129%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb575e0f0g0h0i0j0k1l2m2v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D{c_RenderCaptchaID}%7Cb576e0m191I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb576e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb576e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F{c_AppID}.js%7Cb576e0m193I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb576e0f0g0h0i0j0k121l182m205u130826v130526w431873K1I12M-938627940%7Chttps%3A%2F%2Fc.la1-c1-syd.salesforceliveagent.com%2Fcontent%2Fg%2Fjs%2F51.0%2Fdeployment.js%7Cb576e0m185K1I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2"
		"Fwebfont%2F1.6%2Fwebfont.js%7Cb576e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb647e0f0g0h0i0j0k117l138m139u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb663e0m109I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb678e0m99I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb686e0f1g27h27i316j67k316l481m482u2706v2406w7447T-1z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb688e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb688e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb688e0f0g0h0i0j0k1l20m21u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb7"
		"24e0f0g0h0i0j0m0u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb724e0f0g0h0i0j0m0u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb725e0f0g0h0i0j0m0u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb725e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb725e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb725e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb725e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fa"
		"ssets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb725e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D86731391071%3F%7Cb738e0f26g238h238i398j238k241l857m858u12250v11950w31898K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb759e0f0g0h0i0j0m0u28019v27719w186470E1F870756O1519P590Q3840R1400I9M-305230292%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fmy-amp.jpg%7Cb762e0f0g0h0i0j0k4l48m62u16909v16609w16798N3O389P276Q488I9M1463103859%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fdebit-card.jpg%7Cb763e0f0g0h0i0j0k6l62m62u13999v13699w13869N3O389P276Q488I9M1020678291%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fsavings-calculator.jpg%7Cb763e0f0g0h0i0j0k9l61m62u22128v21828w21977N3O389P276Q488I9M-1336411013%7Chttps%3A%2F%2Fwww.gstatic.com"
		"%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb791e0m4I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb792e0m4I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb792e0m3K1I11%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb799e0m1T-2z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb802e0m2I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724369252%7Cb854e0f0g0h0i0j0k1l123m125u10070v9770w50111T-3z1I1M-159043271%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fcall-us.svg%7Cb854e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb854e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb855e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2"
		"Fget-advice.svg%7Cb855e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb859e0m869N3O1P1I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb912e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb984e0m2I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb992e0m1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb1005e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb1006e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb1007e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%2F%2Fd.la1-c1-syd.salesforceliveagent.com%2Fchat%2Fres"
		"t%2FVisitor%2FSettings.jsonp%7Cb1019e0m646I12%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D{c_RenderCaptchaID}%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dr9i0v3tdrqpq%7Cb1029e0m567F5208N1Bi0I4%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb1048e0m617T-4z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D{c_AppID}%26liveness%3Ddelayed%7Cb1053e0m1T-5z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb1145e0m448A1N3I7%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb1221e0m2I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb1226e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb1231e0m1I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb1263e0m2I12%7Chttps%3A%2F%2Fwww.facebook"
		".com%2Ftr%2F%7Cb1263e0m507I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1263e0m507I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb1277e0m387I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb1278e0m2178I7%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb1595e0m4I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb1596e0m4I12%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs68684423471537%7Cb1610e0m1555I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m172I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m178I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m178I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb1677e0m2I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomr"
		"hp.js%7Cb1678e0f0g0h0i0j0k1l1m1v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb1679e0f1g2h2i110j3k110l282m282u300I3%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb1685e0m296z11I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb1686e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb1686e0m1I12%7C11035194.fls.doubleclick.net%2F..%2F..4%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D8302001295895%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1712c0d249e251f251g251h251i251j251k251l362m366u700v400w508Bi2I4%7C11030517.fls.doubleclick.net%2F..%2F..7%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D6100204458533%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1722c0d239e241f241g241h241i241j241k241l353m356u700v400w508Bi3I4%7C11034081.fls.doubleclick.net%2F..%2F..1%5Estype%3Dampmn0%5Es"
		"cat%3Dpc_5Ftt00g%5Esord%3D3268237875934%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1741c0d221e223f223g223h223i223j223k223l333m337u702v402w508Bi4I4%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Cb1773e0m1392T-6z1I1%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643724369745%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1934e0m188I7%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Cb3168e0m1885T-7z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs68951476384456%7Cb3457e0m41I7%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb3501e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3506e0f0g0h0i0j0k1l1m1v1406w1406I22M-15905"
		"66809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3508e0f0g0h0i0j0k0l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb3524e0m2780A1N3S2781I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title=High%20Interest%20Saving%20Accounts%20-%20AMP$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724376915",
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("rb_bf96747ztk_13",
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn={c_Sn}&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince={c_ModifiedSince}&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app={c_App}&crc=376999922&en=o0bm09bh&end=1",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t40.inf",
		"Mode=HTML",
		"EncType=text/plain;charset=UTF-8",
		"Body=$a=1%7C14%7C_event_%7C1643724379324%7C_wv_%7CAAI%7C1%7CfIS%7C10790%7CfID%7C0$rId=RID_-788520561$rpId=-1556384750$domR=1643724372031$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title=High%20Interest%20Saving%20Accounts%20-%20AMP$latC=1$app={c_App}$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724381341",
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("versions_2",
		"URL=https://yourir.info/api/v5/versions?appID={c_AppID}&libVersion=1.11.6&st=1",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.amp.com.au/banking/savings-accounts",
		"Snapshot=t41.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("S01_T02_ClickOnSavingsAccount_UnderBankingPage",LR_AUTO);

	lr_think_time(think_time);

	return 0;
}
