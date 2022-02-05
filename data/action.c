Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

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
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_-2D14_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9&svrid=-14&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app=cd4697ba1bc4a478&crc=3930928174&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1643723223018%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723227364%7C0%7Cdn%7C27%7Cxu%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DMC%26d_rtbd%3Djson%26d_ver%3D2%26d_orgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26d_nsid%3D0%26ts%3D1643723227362%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723227366e0m4912T-1z11I1%7Cxcs%7C4916%7Cxce%7C4924%2C3%7C4%7Cx%7Cxhr%7Cx%7C1643723232285%7C0%7Cdn%7C-1%7Cxu%7Chttp"
		"s%3A%2F%2Famp.d2.sc.omtrdc.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26mid%3D70673313952007354231088583865990664449%26ts%3D1643723232284%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723232186%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0$PV=1$rId="
		"RID_2418$rpId=1207548181$url=https%3A%2F%2Fwww.amp.com.au%2F$title=$latC=1113$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323227148_865$v=10231211201155045$time=1643723236889", 
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
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_-2D14_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9&svrid=-14&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app=cd4697ba1bc4a478&crc=3733789258&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1643723223018%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C8%7C_event_%7C1643723223018%7C_vc_%7CV%7C14903%5Epf%7CVCD%7C94%7CVCDS%7C2%7CVCS%7C15693%7CVCO%7C15693%7CVCI%7C0%7CVE%7C152%5Ep751%5Ep53640%5Eps%5Es...div.product-tile__image%7CS%7C14131%2C2%7C9%7C_event_%7C1643723223018%7C_wv_%7ClcpE%7CP%7ClcpSel%7Cdiv.hpb__des%3Ep%3Afirst-child%7ClcpS%7C45566%7ClcpT%7C14221%7ClcpU%7C-%7Cfcp%7C14066%7Cfp%7C14066%7Ccls%7C0.0002%7Clt%"
		"7C6722%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723227364%7C1643723237894%7Cdn%7C1132%7Cxu%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DMC%26d_rtbd%3Djson%26d_ver%3D2%26d_orgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26d_nsid%3D0%26ts%3D1643723227362%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723227366e0m4912T-3z1I1%7Cxcs%7C4916%7Cxce%7C4924%2C3%7C4%7Cx%7Cxhr%7Cx%7C1643723232285%7C1643723237894%7Cdn%7C1132%7Cxu%7Chttps%3A%2F%2Famp.d2.sc.omtr"
		"dc.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26mid%3D70673313952007354231088583865990664449%26ts%3D1643723232284%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723232286e0m5417T-2z11I1%7Cxcs%7C5499%7Cxce%7C5609%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723232186%7C1643723236893%7Cdn%7C26%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampservicesli"
		"mited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723232189e0m4714T-4z11I1%7Cxcs%7C4707%7Cxce%7C4707%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723237897%7C0%7Cdn%7C-1%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723237957%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconf"
		"ig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643723238112%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fapi.ipdata.co%2F%3Fapi-key%3D1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c30%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C595%7Cxce%7C596%2C1%7C10%7C_event_%7C1643723223018%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_2418$rpId=1207548181$unload=xhr$tvn=%2F$tvt=1643723223018$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt="
		"a0b1643723223018e2073f2074g2111h2111i2226j2145k2226l3037m3040u20812v20512w159935M1207548181$ni=4g|7.25$di=1$rt="
		"1-1643723223018%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb3058e0f2g131h131i1068j247k1068l1182m1265u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb3058e0f2g2h2i336j28k510l1050m1055u43675v43375w348255K1I11M-1105674006%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb3059e0f29g29h29i364j125k510l1051m1268u88342v88042w294660K1I12M542266979%"
		"7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb3059e0f418g418h418i1052j441k1054l1155m6116u11037v10737w48607K1I12M1922023617%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb3059e0f441g441h441i1052j508k1054l1155m6115u1273v973w2408K1I12M-2121197485%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb3059e0f0g0h0i0j0k1054l1154m1155u8810v8510w24519K1I12M52068919%7Chttps%3A%2F%2Fw"
		"ww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb3059e0f0g0h0i0j0k524l1050m1052u2480v2180w11909K1I11M1133817745%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb3060e0f365g365h365i1051j416k1053l1154m1155u5172v4872w38911K1I11M761272653%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%7Cb3060e0m11816I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-lo"
		"go.svg%7Cb3060e0f0g0h0i0j0k10983l11105m11626u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb3060e0f0g0h0i0j0k10982l11421m11629u205462v205162w205162A2E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fyourir.info%2F61b218eca79bef95.js%7Cb3060e0m11815I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb3060e0f0g0h0i0j0k10816l10853m11064u130826v130526w431873K1I12M"
		"-2119166934%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb3060e0f10981g11069h11069i11640j11104k11643l11812m11818u5737v5437w13188K1I12%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_5Fvisid_5Fver%3D4.5.2%26d_5Ffieldgroup%3DMC%26d_5Frtbd%3Djson%26d_5Fver%3D2%26d_5Forgid%3D11BA6EA55322342B0A490D44_2540AdobeOrg%26d_5Fnsid%3D0%26ts%3D1643723227362%7Cb4348e0m4912T-3z1I1%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb4378e0m10499I12%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a"
		"2740%7Cb4397e0m9534I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb4397e0f1g118h118i4766j190k4767l9463m9471u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb4397e0f0g0h0i0j0k1l118m4760u2343v2043w10164I9M-1570890603%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version"
		"%3D2.3.2%7Cb9171e0m4714T-4z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fid%3Fd_5Fvisid_5Fver%3D4.5.2%26d_5Ffieldgroup%3DA%26mcorgid%3D11BA6EA55322342B0A490D44_2540AdobeOrg%26mid%3D70673313952007354231088583865990664449%26ts%3D1643723232284%7Cb9268e0m5417T-2z1I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb14046e0f0g0h0i0j0k830l854m856u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Faa8fe1"
		"3f4c832769bd0ab2ea7e247013.svg%7Cb14086e0f0g0h0i0j0k599l642m642u2855v2555w2555I9M2144880504%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb14087e0f0g0h0i0j0k599l695m815u356733v356433w356360A2E2F53640O596P276I9M-848517780%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb14088e0f0g0h0i0j0k602l703m795u71976v71676w73997A2E1F53640O596P276I9M1335298681%7Ch"
		"ttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cb14167e0f0g0h0i0j0k562l706m716u51131v50831w55789A2E1F675840O1920P440I7M1591522922%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FSuper1.svg%7Cb14167e0f0g0h0i0j0k586l695m707u3174v2874w2874I7M-1143048870%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Frelaxation.svg%7Cb14168e0f0g0h0i0j0k595l706m708u2137v1"
		"837w1837I7M-819759634%7Chttps%3A%2F%2Fapi.ipdata.co%2F%3Fapi-key%3D1a31485dfcd75b472742d9f7e224d7057a5d9ba6ce95eee1ee785c30%7Cb15139e0m549z11I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb14080m1695A2I0%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb14080m1695A2I0$fd=j1.12.4$url=https%3A%2F%2Fwww.amp.com.au%2F$title="
		"AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$isUnload=1$latC=1113$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323227148_865$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$nV=1$nVAT=1$time=1643723238847", 
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
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID=61b218eca79bef95&liveness=delayed", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("amp.nzx", 
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID=61b218eca79bef95&liveness=delayed", 
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
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID=61b218eca79bef95&liveness=delayed", 
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
		"Body={\"requestId\":\"e5a463e9a43f4c79876b32d35dd30e58\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics "
		"Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/\",\"referringUrl\":\"https://www.amp.com.au/\"}},\"id\":{\"marketingCloudVisitorId\":\"70673313952007354231088583865990664449\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"5E54090A9222F1BA-0A28CD26753F4993\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\""
		",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"profileParameters\":{\"pageName\":\"home\"}}},\"prefetch\":{\"views\":[{\"profileParameters\":{\"pageName\":\"home\"}}]}}", 
		LAST);

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.nzx_2", 
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID=61b218eca79bef95&liveness=delayed", 
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
		"URL=https://www.google.com/recaptcha/api2/anchor?ar=1&k=6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q&co=aHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.&hl=en&v=dPctOHA2ifhWm5WzFM_B5TjT&size=invisible&cb=4vsui6rq4c26", 
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

	web_add_header("x-dtpc", 
		"-14$323239286_168h7vTAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0e0");

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
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app=cd4697ba1bc4a478&crc=2603654517&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239344e0f1g1h1i5045j255k5050l5153m5156u606v306"
		"w361T-1z11I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-2z11I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Es"
		"k0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-4z11I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-3z11I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C16"
		"43723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244419e0m66T-5z11I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg"
		"%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244421e0m251T-6z11I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C0%7Cdn%7C-1%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_2418$rpId=1207548181$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId="
		"323239286_168$v=10231211201155045$time=1643723249860", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("versions", 
		"URL=https://yourir.info/api/v5/versions?appID=61b218eca79bef95&libVersion=1.11.6&st=1", 
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

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dc_pre=CNitpqTS3vUCFcV5fQod8d8IMQ;src=11035194;type=ampwe0;cat=pc_tt002;ord=3010442771459;gtm=2od1q0;auiddc=1529137724.1643723250;~oref=https%3A%2F%2Fwww.amp.com.au%2F", 
		"URL=https://adservice.google.com/ddm/fls/i/dc_pre=CNitpqTS3vUCFcV5fQod8d8IMQ;src=11035194;type=ampwe0;cat=pc_tt002;ord=3010442771459;gtm=2od1q0;auiddc=1529137724.1643723250;~oref=https%3A%2F%2Fwww.amp.com.au%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://11035194.fls.doubleclick.net/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("dc_pre=CJuesaTS3vUCFcmSSwUdEscBVg;src=11034081;type=ampmn0;cat=pc_tt00g;ord=6429398075117;gtm=2od1q0;auiddc=1529137724.1643723250;~oref=https%3A%2F%2Fwww.amp.com.au%2F", 
		"URL=https://adservice.google.com/ddm/fls/i/dc_pre=CJuesaTS3vUCFcmSSwUdEscBVg;src=11034081;type=ampmn0;cat=pc_tt00g;ord=6429398075117;gtm=2od1q0;auiddc=1529137724.1643723250;~oref=https%3A%2F%2Fwww.amp.com.au%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://11034081.fls.doubleclick.net/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dc_pre=COqhqqTS3vUCFcyySwUdyQkHjw;src=11030517;type=ampba0;cat=pc_tt01k;ord=9903385081955;gtm=2od1q0;auiddc=1529137724.1643723250;~oref=https%3A%2F%2Fwww.amp.com.au%2F", 
		"URL=https://adservice.google.com/ddm/fls/i/dc_pre=COqhqqTS3vUCFcyySwUdyQkHjw;src=11030517;type=ampba0;cat=pc_tt01k;ord=9903385081955;gtm=2od1q0;auiddc=1529137724.1643723250;~oref=https%3A%2F%2Fwww.amp.com.au%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://11030517.fls.doubleclick.net/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_4", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app=cd4697ba1bc4a478&crc=2439366964&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643"
		"723239344e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-7z1I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-8z1I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclient"
		"libs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-10z1I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-9z1I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7"
		"Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244419e0m66T-11z1I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddela"
		"yed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244421e0m251T-12z1I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C1643723250249%7Cdn%7C1233%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244693e0m5456T-13z11I1%7Cxcs%7C5556%7Cxce%7C5559%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643723249892%7C1643723250295%7Cdn%7C1235%7Cxu%7Chttps%3A%2F%2Fyourir."
		"info%2Fapi%2Fv5%2Fversions%3FappID%3D61b218eca79bef95%26libVersion%3D1.11.6%26st%3D1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723250037e0m141T-14z11I1%7Cxcs%7C402%7Cxce%7C403%2C2%7C10%7Cx%7Cxhr%7Cx%7C1643723251155%7C1643723251461%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643723250312%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D2022012"
		"9-3-RELEASE%26tos%3D843%26ssd%3D1%26scd%3D13%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723251157e0m304T-15z11I1%7Cxcs%7C306%7Cxce%7C306%7Crc%7C204%7Crm%7C"
		"No%20Content%2C2%7C11%7Cx%7Cxhr%7Cx%7C1643723251873%7C1643723258338%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D1561%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D1500%26rv%3D1%26tim%3D1643723251872%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazr"
		"LyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C6465%7Cxce%7C6465%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C12%7Cx%7Cxhr%7Cx%7C1643723254890%7C1643723258344%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D4578%26scd%3D13%26ssd%3D1%26est%3"
		"D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D3000%26rv%3D1%26tim%3D1643723254889%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7"
		"Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C3454%7Cxce%7C3454%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C13%7C_onload_%7C_load_%7C-%7C1643723258422%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$PV=1$rId=RID_2418$rpId=1207548181$url=https%3A%2F%2Fwww.amp.com.au%2F$title=AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v="
		"10231211201155045$time=1643723260717", 
		LAST);

	web_custom_request("rb_bf96747ztk_5", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app=cd4697ba1bc4a478&crc=3059941604&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"s%7C7%7Cx%7Cxhr%7Cx%7C323227148_865%7C1643723238112%7C%7C%2F%7C1643723223018%2C1%7C1%7C_load_%7C_load_%7C-%7C1643723238857%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C14%7C_event_%7C1643723238857%7C_vc_%7CV%7C5814%5Epc%7CVCD%7C3550%7CVCDS%7C2%7CVCS%7C19628%7CVCO%7C21577%7CVCI%7C0%7CVE%7C152%5Ep744%5Ep1296%5Eps%5Esdiv.media-block.image-template.cookie-ill%3Eimg.image-template%3Afirst-child%7CS%7C797%2"
		"C2%7C15%7C_event_%7C1643723238857%7C_wv_%7ClcpE%7CIMG%7ClcpSel%7C...ia-block.image-template%3Afirst-child%3Epicture.featured.resizable-image%3Afirst-child%3Eimg%3Anth-child...%7ClcpS%7C668144%7ClcpT%7C5953%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cfcp%7C5953%7Cfp%7C5953%7Ccls%7C0%7Clt%7C12331%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643723239343%7C1643723244681%7Cdn%7C1216%7Cxu%7Chttps%3A%2F%2Fampservi"
		"ceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239344e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-16z1I1%7Cxcs%7C5338%7Cxce%7C5338%7Crc%7C971%7Crm%7CXHR%20Canceled%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643723239373%7C1643723239635%7Cdn%7C238%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0"
		"%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239602e0m1T-17z1I1%7Cxcs%7C244%7Cxce%7C262%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723239681%7C1643723244798%7Cdn%7C1233%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723239685e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-19z1I1M-2108586233%7Cxcs%7C4824%7Cxce%7C4995%2C3%7C7%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643723244672%7C1643723244798%"
		"7Cdn%7C1233%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244676e0f0g0h0i0j0k3l65m65u319v19w19T-18z1I1M1533221510%7Cxcs%7C125%7Cxce%7C126%7Crc%7C972%7Crm%7CXHR%20Timeout%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643723244406%7C1643723244761%7Cdn%7C1228%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt"
		"%7Cb1643723244419e0m66T-20z1I1%7Cxcs%7C354%7Cxce%7C354%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643723244419%7C1643723244748%7Cdn%7C1224%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244421e0m251T-21z1I1%7Cxcs%7C328%7Cxce%7C329%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643723244690%7C1643723250249%7Cdn%7C1233%7Cxu%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%"
		"7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723244693e0m5456T-22z1I1%7Cxcs%7C5556%7Cxce%7C5559%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643723249892%7C1643723250295%7Cdn%7C1235%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D61b218eca79bef95%26libVersion%3D1.11.6%26st%3D1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723250037e0m141T-23z1I1%7Cxcs%7C402%7Cxce%7C403%2C2%7C10%7Cx%7Cxhr%7Cx%7C1643723251155%7C1643723251461%7Cd"
		"n%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643723250312%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D843%26ssd%3D1%26scd%3D13%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWAB"
		"gAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643723251157e0m304T-24z1I1%7Cxcs%7C306%7Cxce%7C306%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C11%7Cx%7Cxhr%7Cx%7C1643723251873%7C1643723258338%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D1561%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D1500%"
		"26rv%3D1%26tim%3D1643723251872%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C6465%7Cxce%7C6465%7Crc"
		"%7C204%7Crm%7CNo%20Content%2C2%7C12%7Cx%7Cxhr%7Cx%7C1643723254890%7C1643723258344%7Cdn%7C1244%7Cxu%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpre_d_eng_tb%26tos%3D4578%26scd%3D13%26ssd%3D1%26est%3D1643723250310%26ver%3D35%26isls%3Dtrue%26src%3Di%26invt%3D3000%26rv%3D1%26tim%3D1643723254889%26vi%3D1643723250308%26ri%3De01cd59fb8f3fc1a6692eb5d92ebb995%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jg"
		"YQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C3454%7Cxce%7C3454%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C13%7C_onload_%7C_load_%7C-%7C1643723258422%7C1643723258429%7Cdn%7C1245%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C16%7C_event_%7C1643723238857%7C_"
		"view_%7Csvn%7C%2F%7Csvt%7C1643723223018%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_2418$rpId=1207548181$domR=1643723258419$tvn=%2F$tvt=1643723238857$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a1b1643723238857e2f2g2h2i2j2k28l234m235o890p890q5564r19563s19565t19572u20812v20512w159935M1207548181$ni=4g|7.25$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2F$title="
		"AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=14$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643723262050", 
		LAST);

	web_custom_request("rb_bf96747ztk_6", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2F&bp=3&app=cd4697ba1bc4a478&crc=1746248468&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2F$tvt=1643723238857$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|7.25$di=1$rt="
		"1-1643723238857%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb398e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb398e0f0g0h0i0j0m0u43675v43375w348255K1I11M-1105674006%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb398e0f0g0h0i0j0m0u88342v88042w294660K1I12M542266979%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlib"
		"s%2Fgranite%2Futils.js%7Cb398e0f0g0h0i0j0m0u11037v10737w48607K1I12M1922023617%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb398e0f0g0h0i0j0m0u1273v973w2408K1I12M-2121197485%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb398e0f0g0h0i0j0m0u8810v8510w24519K1I12M52068919%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb398e0f0g0h0i0j0m0u2480v2180w11909K1I11M1133817745"
		"%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb398e0f0g0h0i0j0k27l59m68u5172v4872w38911K1I11M761272653%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%7Cb398e0m0I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb399e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2F"
		"amp-logo.svg%7Cb399e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F61b218eca79bef95.js%7Cb399e0m0I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb399e0f0g0h0i0j0k27l50m75u130826v130526w431873K1I12M-2119166934%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb399e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f82"
		"08860b7b%2FAppMeasurement.min.js%7Cb449e0f0g0h0i0j0k298l326m329u12484v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb461e0m0I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb482e0m0I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb487e0f1g1h1i5045j255k5050l5153m5156u606v306w361T-16z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb495e0m0I9%7Chttps%3A%2F%2Ffont"
		"s.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb495e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb496e0f0g0h0i0j0m0u2343v2043w10164I9M-1570890603%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb510e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22"
		"ad6bca213fa88175f7d9ffaf.woff2%7Cb511e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb511e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb511e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7"
		"Cb511e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb745e0m1T-17z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb750e0m5532I12%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb750e0m0I12%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D814987224454%3F%7Cb757e0f0g0h0i0j0k21l4774m4781u12243v11943w31"
		"896K1I12%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb778e0m4753N3O1P1I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2F1920x440_5Fgirlpiggybank.jpg.ampaurendition.1920.0.jpg%7Cb799e0f0g0h0i0j0m0u51131v50831w55789E1F675840O1920P440I7M1591522922%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FSuper1.svg%7Cb799e0f0g0h0i0j0m0u3174v2874w2874I7M-1143048870%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2"
		"Frelaxation.svg%7Cb800e0f0g0h0i0j0m0u2137v1837w1837I7M-819759634%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FHome_2520loans.svg%7Cb800e0f0g0h0i0j0m0u3746v3446w3446I7M-1777842142%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FBanking1.svg%7Cb800e0f0g0h0i0j0m0u3376v3076w3076I7M1400897430%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fhand-and-coin.svg%7Cb800e0f0g0h0i0j0m0u1505v1205w1205I7M408813756%7Chttps%3A%2F%2Fww"
		"w.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fpiggy-bank-clock.svg%7Cb800e0f0g0h0i0j0m0u2686v2386w2386I7M-963048168%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fsmart-money.svg%7Cb800e0f0g0h0i0j0m0u1948v1648w1648I7M1501333684%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FInvestments1.svg%7Cb800e0f0g0h0i0j0m0u2430v2130w2130I7M1181909166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fumbrella.svg%7Cb800e0f0"
		"g0h0i0j0m0u1615v1315w1315I7M-731300366%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643723239363%7Cb828e0f0g0h0i0j0k1l106m4707u10070v9770w50111T-19z1I1M-2108586233%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Faa8fe13f4c832769bd0ab2ea7e247013.svg%7Cb832e0f0g0h0i0j0m0u2855v2555w2555I9M2144880504%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fpage-banners%2FPodcast-landing-page-banner-768x480.png%7Cb832e0f0g0h0"
		"i0j0k1l1m3v356433w356360N3O596P276Q768R480I9M-848517780%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fcampaign%2Fbrand-Campaign-ProductPromo-488x276.jpg%7Cb833e0f0g0h0i0j0k1l1m2v71676w73997N3O596P276Q488I9M1335298681%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb847e0m0I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb847e0m0K1I11%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb849e0m0I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytic"
		"s%2Finsight.min.js%7Cb851e0m0I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb889e0m4648I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb891e0f0g0h0i0j0k3l4620m4644u689v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb892e0f6g6h6i4641j42k4646l4735m4736u594v"
		"294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb896e0f0g0h0i0j0k4641l4729m4731u788v488w824I12%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3D4vsui6rq4c26%7Cb5545e0m270F5208N1Bi0I4%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsy"
		"mbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb5562e0m66T-20z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb5564e0m251T-21z1I1%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb5567e0f0g0h0i0j0k321l371m715u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb5573e0f0g0h0i0j0k55l186m241u1682v1"
		"382w1382E2F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb5644e0m5307A1N3I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fwps%2Fgws%2FNetPromoterScore%3FpageId%3Damp_253A%7Cb5819e0f0g0h0i0j0k3l65m65u319v19w19T-18z1I1M1533221510%7Chttps%3A%2F%2Fapi.ipify.org%2F%3Fformat%3Djsonp%26callback%3D%3F%7Cb5836e0m5456T-22z1I1%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb5925e0m358I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb5925e0"
		"m5225I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb5925e0m5225I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb5927e0m362I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb5928e0f0g0h0i0j0k349l371m374u3459v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb5929e0f0g0h0i0j0k355l5022m5022u300I3%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2F"
		"js%3Fid%3DDC-11035194%7Cb6235e0m5060I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb6238e0m5123I12%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs62978943562986%7Cb6304e0m4649I7%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643723239746%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%7Cb6347e0m4832I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb11013e0m240I7%7Chttps%3A%2F%2Fwww.facebook.com%2"
		"Ftr%2F%7Cb11013e0m349I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb11013e0m349I7%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D61b218eca79bef95%26libVersion%3D1.11.6%26st%3D1%7Cb11180e0m141T-23z1I1%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb11447e0m383I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb11448e0m383I12%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%"
		"7Cb11458e0m839I12%7Chttps%3A%2F%2F11035194.fls.doubleclick.net%2Factivityi%5Essrc%3D11035194%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D3010442771459%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11854c0d550e551f551g551h551i662j551k662l773m776u683v383w482Bi2I4%7Chttps%3A%2F%2F11030517.fls.doubleclick.net%2Factivityi%5Essrc%3D11030517%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D9903385081955%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1"
		"643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11863c0d609e612f612g612h612i612j612k731l875m876u680v380w482Bi3I4%7Chttps%3A%2F%2F11034081.fls.doubleclick.net%2Factivityi%5Essrc%3D11034081%5Estype%3Dampmn0%5Escat%3Dpc_5Ftt00g%5Esord%3D6429398075117%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252F%3F%7Cb11871c0d711e712f712g712h712i712j712k712l838m841u683v383w482Bi4I4%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%"
		"7Cb12300e0m304T-24z1I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb12300e0m27I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb12301e0m61I12%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb13018e0m6463z11I1%7Chttps%3A%2F%2Ftrc-events.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb17822e0m1664z11I1%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb19569e0m977"
		"K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb19581e0f0g0h0i0j0k2l71m71u1706v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb19654e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb20561e0m2611A1N3S2614I7$url=https%3A%2F%2Fwww.amp.com.au%2F$title="
		"AMP%20%E2%80%93%20Banking%2C%20home%20loans%2C%20super%2C%20retirement%20%26%20financial%20advice$latC=1$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=323239286_168$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643723264123", 
		LAST);

	lr_start_transaction("S01_T00_Launch_AMP_HomePage");

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_reg_find("Text=Personal\r\nEmployer\r\nAdviser", 
		LAST);

	web_reg_find("Text=Personal\r\nEmployer\r\nAdviser", 
		LAST);

	web_reg_find("Text=Personal\r\nEmployer\r\nAdviser", 
		LAST);

	web_reg_find("Text=Personal\r\nEmployer\r\nAdviser", 
		LAST);

	web_reg_find("Text=Personal\r\nEmployer\r\nAdviser", 
		LAST);

	web_reg_find("Text=Personal\r\nEmployer\r\nAdviser", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,gcmjkmgdlgnkkcocmoeiminaijmmjnii,kiabhabjdbkjdpjbpigfodbdjmbglcoo,obedbbhbpmojnkanicioggnmelmoomoc,gonpemdgkjcecdgbnaabipppbmgfggbe,hnimpnehoodheedghdeeijklkeaacbdc,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,oimompecagnajdejgnnjijobebaeigek,llkgjffcdpffmhiakmfcdcblohccpfmo,giekcmmlnklenlaomppkphknjmnnpneh,cmahhnpholdijhjokonmfdjbfmklppij,lmelglejhemejginpboagddgdfbepgmp,ggkkehgbnfjpeggfpleeakpidbkibbmn,gkmgaooipdjhmangpemjhigmamcehddo,"
		"ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,pdafiollngonhoadbmdoemagnfpdphbe,imefjhfbkmcmebodilednhmaccmincoa,dhlpobdgcjafebgbbhjdnapejmpkgiie,efniojlnjndmcbiieegkicadnoecjjef,ojhpjlocmbogdgmfpkhlaaeamibhnphh,laoigpblnllgcgjnjnllmfolckpjlhki,jamhcnnkihinmdlkakkaopbjbbcngflc,eeigpngbgcognadeebkilcpcaedhellh");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-97.0.4692.99");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:2X0f5Pp0TCmKCyZKPhRb45IURCTtjghzg42tOO1UDFs&cup2hreq=7c970209a487f12b8ebebea356762b24dc1f98c7593a2c6339a7f25cdbb52439", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"OKWM\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{d6a10836-a118-4c70-8855-5e8a006e1599}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"OKWM\",\"cohort\":\"1:bm1:11vf@0.01\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\""
		"packages\":{\"package\":[{\"fp\":\"1.dbbba5869c1d8946e5e23215c0404619fe82793d60eb89489b345ef55023e077\"}]},\"ping\":{\"ping_freshness\":\"{936b8465-312e-4264-bdf9-5d67854cd26b}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"9.32.0\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"OKWM\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.7de0c5b45b564f8089dbeba4a1b4bf821aaa9d946edfc5e98a1baaaef89932f7\"}]},\""
		"ping\":{\"ping_freshness\":\"{7ea4298a-44ed-4517-9e5b-581bc3b8f6bb}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2022.1.31.1\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"OKWM\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.7b17c272a7364423a30eef2093c54f8ab25549a1156625320703381ae108931e\"}]},\"ping\":{\"ping_freshness\":\"{5eb23d25-224f-4a3c-8045-eb6fbd633f6f}\",\""
		"rd\":5510},\"updatecheck\":{},\"version\":\"20220111.419803486\"},{\"_internal_experimental_sets\":\"false\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"OKWM\",\"cohort\":\"1:z1x:\",\"cohorthint\":\"General release\",\"cohortname\":\"General release\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9f3dda168dccf79be5e9593992108a31d2f83c8fe5f63bfc0a1b725f2a3ca47a\"}]},\"ping\":{\"ping_freshness\":\"{cafd8b03-3e98-4717-a3b4-1d8f2b257f4f}\",\"rd\":5510},\"updatecheck\":{},\""
		"version\":\"2021.6.24.0\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"OKWM\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{70495ca9-e28c-4d4b-b14a-69806f02b88b}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"OKWM\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":"
		"\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.85c39ee10cd7b50ae0834a27bed81cf747eaf0d1658009a43b2feb73a6bf56f5\"}]},\"ping\":{\"ping_freshness\":\"{401b2246-43ec-4cd0-9b94-49896f859a3d}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"7133\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"OKWM\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.d237485db9493e87035e3295dbaa1e24b727c7fb91b24401814fd88f2ab81c3c\"}]},\"ping\":{\"ping_freshness\":\"{2a2e782e-5dd0-46da-b47e-8fa7c6b3c792}\",\"rd\":5510},\"tag\":\"46\",\"updatecheck\":{},\"version\":\"47\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"OKWM\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{5af0b4cf-75cf-407f-818d-9d87ffed9940}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"4.10.2391.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\""
		"brand\":\"OKWM\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.689abdc0dc8e916dc8466bf42bfde5635dbe40e64e8d0a86b48008f317cf848b\"}]},\"ping\":{\"ping_freshness\":\"{a89bd9ca-3eb8-481a-8411-53549d8bdc7e}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"1.0.0.10\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"OKWM\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{e58b1f3a-9423-467d-9e7c-4fd7e0aedebb}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"cmahhnpholdijhjokonmfdjbfmklppij\",\"brand\":\"OKWM\",\"cohort\":\"1:wr3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.b4ddbdce4f8d5c080328aa34c19cb533f2eedec580b5d97dc14f74935e4756b7\"}]},\"ping\":{\"ping_freshness\":\""
		"{01e3bfe2-ae57-473d-8684-32351a3765c5}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"1.0.6\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"OKWM\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.505f86d2b495a009fe715fcddf55d6af35f5189b4a8b093c7933de0e18595e78\"}]},\"ping\":{\"ping_freshness\":\"{33cf4b65-d19f-4d4b-99b9-66ef0836db9f}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"316\"},{\"appid\":\""
		"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"OKWM\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80ToM99\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.f01d0cf1209718138dc6596dff43a8c55e847414baac537edc5f9f23f8fa62b6\"}]},\"ping\":{\"ping_freshness\":\"{ad9b5676-8c22-4f1b-9f51-d8ab61aa88d7}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2022.1.24.1201\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"OKWM\",\"cohort\":\"1:pw3:\",\"cohorthint\":\""
		"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9a4393fa2f5a5a43e21ab7365ea12c87ae7be963d6fbcf49abd499ebd7d50b65\"}]},\"ping\":{\"ping_freshness\":\"{c4a38523-2a5e-4c40-adeb-02149ca90493}\",\"rd\":5510},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"96.276.200\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"OKWM\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package"
		"\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{0ca038c5-7a7b-441b-a0e6-c102b77dc9b4}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"OKWM\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ffcda540f242b9ba326823a75de28cd80343fe31a38285db4264081547265fc0\"}]},\"ping\":{\""
		"ping_freshness\":\"{aa9d5010-75d9-4f5d-9b7e-3f8f43a0cfa8}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2770\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"OKWM\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a\"}]},\"ping\":{\"ping_freshness\":\"{c2cfc8ce-d508-480f-854e-96aefbd2934e}\",\"rd\":5510},\"updatecheck\":{},\"version\":\""
		"2021.8.17.1300\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"OKWM\",\"cohort\":\"1:zor:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.90d6e329a99396aced52c13595b29a8af1e2711cdd6f73008ae51d0be83356be\"}]},\"ping\":{\"ping_freshness\":\"{c7306d29-b809-4d49-89ae-dc09c5d11d93}\",\"rd\":5510},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"27.5\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"OKWM\",\""
		"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.8b9dc2cd32d1b5f147a17377cef75ec160103d6c02faf4947978fb6d9a25983b\"}]},\"ping\":{\"ping_freshness\":\"{be43b2d6-2e03-4513-8a2d-9218b455a3d3}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"20211020.1\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"OKWM\",\"cohort\":\"1:zkl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.4fd359c9d2c0f81e54caa538477b63cf8c5f86e267f7218ff5c57440bfe876bf\"}]},\"ping\":{\"ping_freshness\":\"{b3b3570f-6383-41a0-876f-9f7905db80c6}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"157\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"OKWM\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\""
		"ping_freshness\":\"{0489bd45-922f-47b3-84aa-34223f11a68e}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"OKWM\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.db60fc5d4ab81e28fe58d82f3ad26622c4ca4cade28e2b636068ac91ca62224d\"}]},\"ping\":{\"ping_freshness\":\"{b29879e4-faf3-49a4-8c39-1ea9f29befd7}\",\"rd\":5510},\"updatecheck\":{},\"version\":\""
		"1.0.7.1642025427\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"OKWM\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.31365eb4f3fbb1593ddc7f89ae65d4abcbc6c8f10e0d4b6f02d0136d5fd9a2ca\"}]},\"ping\":{\"ping_freshness\":\"{bfb178f2-907b-44fc-8401-bbe4234e1eab}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"100.0.4863.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"OKWM\",\"cohort\":\"1:w59"
		":\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{886c8a61-203f-4020-8eab-f4abcd943ff6}\",\"rd\":5510},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":64},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\""
		"platform\":\"Windows\",\"version\":\"10.0.22000.434\"},\"prodversion\":\"97.0.4692.99\",\"protocol\":\"3.1\",\"requestid\":\"{f89eee4e-73da-4990-9c6d-8dc1c2f21bb6}\",\"sessionid\":\"{c8b681ff-70bf-404c-9575-1a51203fab35}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.122\"},\"updaterversion\":\"97.0.4692.99\"}}", 
		LAST);

	/* Launch AMP Home Page */

	lr_end_transaction("S01_T00_Launch_AMP_HomePage",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T01_ClickOnBanking");

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
		"Body={\"requestId\":\"033494e917804f0a85481a8a0f6b6759\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics "
		"Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking\",\"referringUrl\":\"https://www.amp.com.au/\"}},\"id\":{\"marketingCloudVisitorId\":\"70673313952007354231088583865990664449\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId\":\"5C0E1C7DAD491BA0-79673CE5256CE744\",\"trackingServer\":\""
		"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking\"}}]}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.nzx_3", 
		"URL=https://yourir.info/api/v5/symbols/amp.nzx?appID=61b218eca79bef95&liveness=delayed", 
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
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app=cd4697ba1bc4a478&crc=711500242&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1643724194351%7C0%7Cdn%7C-1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724197359%7C1643724198978%7Cdn%7C1231%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197361e0f1g25h25i529j56k529l1613m1614u2492v219"
		"2w6539T-1z11I1%7Cxcs%7C1618%7Cxce%7C1619%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724197639%7C1643724197749%7Cdn%7C1223%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197685e0f0g0h0i0j0k1l60m60u10070v9770w50111T-2z11I1M1467405377%7Cxcs%7C107%7Cxce%7C110%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724197688%7C1643724197735%7Cdn%7C1223%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%"
		"7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197692e0m1T-3z11I1%7Cxcs%7C45%7Cxce%7C47%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724199027%7C1643724204175%7Cdn%7C1293%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199030e0f0g0h0i0j0k1l5103m5107u320v20w20T-4z11I1M-592864609%7Cxcs%7C5131%7Cxce%7C5148%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724199057%7C1643724199153%7Cdn%7C1280%7Cxu%7Chttps%3A%2F%2Fyou"
		"rir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199059e0m2T-5z11I1%7Cxcs%7C94%7Cxce%7C96%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724199060%7C1643724199227%7Cdn%7C1295%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199063e0m159T-6z11I1%7C"
		"xcs%7C166%7Cxce%7C167%2C3%7C8%7CResizeObserver%20loop%20limit%20exceeded%7C_error_%7C-%7C1643724199121%7C1643724199121%7Cdn%7C-1%2C4%7C9%7CError%7C_type_%7C-%7C1643724199123%7C1643724199123%7Cdn%7C-1%2C4%7C10%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C_location_%7C-%7C1643724199125%7C1643724199125%7Cdn%7C-1%2C4%7C11%7C1865%7C_ts_%7C-%7C1643724199126%7C1643724199126%7Cdn%7C-1%2C4%7C12%7C1%7C_source_%7C-%7C1643724199128%7C1643724199128%7Cdn%7C-1%2C2%7C13%7Cx%7Cxhr%7Cx%7C1643724204153%7C1643724205108"
		"%7Cdn%7C1302%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643724199192%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D613827%26ssd%3D2%26scd%3D81%26mrir%3Dto%26vi%3D1643724199184%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazr"
		"LyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724204156e0m952T-7z11I1%7Cxcs%7C955%7Cxce%7C955%7Crc%7C204%7Crm%7CNo%20Content$PV=1$rId=RID_-909487734$rpId=226671080$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=544$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$time=1643724205172", 
		LAST);

	web_custom_request("rb_bf96747ztk_8", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app=cd4697ba1bc4a478&crc=4188049320&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CBanking%7CC%7C-%7C323239286_168%7C1643724194335%7Chttps%3A%2F%2Fwww.amp.com.au%2F%7C%7C%7C%2F%7C1643723238857%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724194351%7C1643724205817%7Cdn%7C1303%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2F%2C2%7C15%7C_event_%7C1643724194351%7C_vc_%7CV%7C4666%5Epc%7CVCD%7C2591%7CVCDS%7C2%7CVCS%7C11730%7CVCO%7C12743%7CVCI%7C0%7CVE%7C1121%5Ep467%5Ep1599%5Eps%5Esdiv.ps%3Ediv%3Anth-child%282%29%7CS%7C3696%2C"
		"2%7C16%7C_event_%7C1643724194351%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg.banner-wrapper--rates-rhs%7ClcpS%7C875059%7ClcpT%7C9916%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C9916%7Cfp%7C9916%7Ccls%7C0%7Clt%7C5157%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724197359%7C1643724198978%7Cdn%7C1231%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fcl"
		"ient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197361e0f1g25h25i529j56k529l1613m1614u2492v2192w6539T-8z1I1%7Cxcs%7C1618%7Cxce%7C1619%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724197639%7C1643724197749%7Cdn%7C1223%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb164372419768"
		"5e0f0g0h0i0j0k1l60m60u10070v9770w50111T-9z1I1M1467405377%7Cxcs%7C107%7Cxce%7C110%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724197688%7C1643724197735%7Cdn%7C1223%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724197692e0m1T-10z1I1%7Cxcs%7C45%7Cxce%7C47%2C2%7C5%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724199027%7C1643724204175%7Cdn%7C1293%7Cxu%7C%2Fwps%2Fgws%2FNetPromoterScore%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtr"
		"g%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199030e0f0g0h0i0j0k1l5103m5107u320v20w20T-11z1I1M-592864609%7Cxcs%7C5131%7Cxce%7C5148%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724199057%7C1643724199153%7Cdn%7C1280%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199059e0m2T-12z1I1%7Cxcs%7C94%7Cxce%7C96%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724199060%7C1643724199227%7Cdn%7C1295%"
		"7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724199063e0m159T-13z1I1%7Cxcs%7C166%7Cxce%7C167%2C3%7C8%7CResizeObserver%20loop%20limit%20exceeded%7C_error_%7C-%7C1643724199121%7C1643724199121%7Cdn%7C-1%2C4%7C9%7CError%7C_type_%7C-%7C1643724199123%7C1643724199123%7Cdn%7C-1%2C4%7C10%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C_location_%7C-%7C164372419912"
		"5%7C1643724199125%7Cdn%7C-1%2C4%7C11%7C1865%7C_ts_%7C-%7C1643724199126%7C1643724199126%7Cdn%7C-1%2C4%7C12%7C1%7C_source_%7C-%7C1643724199128%7C1643724199128%7Cdn%7C-1%2C2%7C13%7Cx%7Cxhr%7Cx%7C1643724204153%7C1643724205108%7Cdn%7C1302%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26tim%3D1643724199192%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252F%26cv%3D2"
		"0220129-3-RELEASE%26tos%3D613827%26ssd%3D2%26scd%3D81%26mrir%3Dto%26vi%3D1643724199184%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643723251_CIi3jgYQy7xLGIS1qazrLyABKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724204156e0m952T-14z1I1%7Cxcs%7C955%7Cxce%7C955%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C14%7C_onload_%7C_load_%7C-%7C1643724205814%7C164372420581"
		"7%7Cdn%7C1303%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C17%7C_event_%7C1643724194351%7C_view_%7Csvn%7C%2F%7Csvt%7C1643723238857%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-909487734$rpId=226671080$domR=1643724205812$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724194351e3f4g40h40i1088j57k1088l2616m2619o4667p4667q4726r11461s11463t11466u20839v20539w161012M226671080$ni=4g|6.9$di="
		"1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=544$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724208684", 
		LAST);

	web_custom_request("rb_bf96747ztk_9", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app=cd4697ba1bc4a478&crc=2452274923&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$rt="
		"1-1643724194351%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb2648e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb2648e0f1g1h1i88j23k191l235m264u43675v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb2648e0f0g0h0i0j0k208l252m422u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2F"
		"etc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb2648e0f109g109h109i207j137k212l258m491u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb2648e0f0g0h0i0j0k259l302m585u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb2648e0f137g137h137i258j169k263l302m303u8810v8510w24519K1I12M-1911738036%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2Fclien"
		"tLibraries%2Ficons-libs.css%7Cb2648e0f87g87h87i190j87k196l241m253u2480v2180w11909K1I11M-1515373129%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb2648e0f108g108h108i195j108k197l255m259u5172v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%7Cb2648e0m1002I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb2649e0f0g0h0i0j0m0u20546"
		"2v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb2649e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F61b218eca79bef95.js%7Cb2649e0m588I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb2649e0f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb2649e0f0g0h0i0j0k5"
		"23l567m573u130826v130526w431873K1I12M-938627940%7Chttps%3A%2F%2Fc.la1-c1-syd.salesforceliveagent.com%2Fcontent%2Fg%2Fjs%2F51.0%2Fdeployment.js%7Cb2649e0m1976K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb2967e0f270g324h324i590j339k590l1645m1658u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb2990e0m249I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb3003e0m237I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Fre"
		"st%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb3010e0f1g25h25i529j56k529l1613m1614u2492v2192w6539T-8z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb3011e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb3011e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb3011e0f0g0h0i0j0k1l2"
		"1m22u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb3086e0f0g0h0i0j0m0u44956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb3087e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb3087e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F"
		"%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb3087e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb3087e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb3087e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%"
		"2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D101251047083%3F%7Cb3237e0f2g72h72i296j90k94l488m488u12244v11944w31896K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FBanking1.svg%7Cb3250e0f0g0h0i0j0m0u3376v3076w3076I7M1400897430%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fhand-and-coin.svg%7Cb3250e0f0g0h0i0j0m0u1505v1205w1205I7M408813756%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%"
		"2Fpiggy-bank-clock.svg%7Cb3250e0f0g0h0i0j0m0u2686v2386w2386I7M-963048168%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fsmart-money.svg%7Cb3250e0f0g0h0i0j0m0u1948v1648w1648I7M1501333684%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb3252e0f0g0h0i0j0k74l105m109u28019v27719w186470E1F870756O1519P590Q3840R1400I9M-305230292%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Ffinancial-hub%2Fma"
		"nage-my-money%2FMENU_5Fbuynowpaylater22.jpg.ampaurendition.1920.0.jpg%7Cb3259e0f0g0h0i0j0m0u180334v180034w182325I7M-929783390%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Ffinancial-hub%2Fmanage-my-money%2FMENU_5FLNY22.jpg.ampaurendition.1920.0.jpg%7Cb3259e0f0g0h0i0j0m0u146424v146124w148784I7M138881200%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FServices.svg%7Cb3259e0f0g0h0i0j0m0u7754v7454w7454I7M-670098857%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent"
		"%2Fdam%2Famp-au%2Fillustrations%2FFAQs.svg%7Cb3260e0f0g0h0i0j0m0u2870v2570w2570I7M1608639612%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2FTools-and-calculators.svg%7Cb3260e0f0g0h0i0j0m0u2313v2013w2013I7M577022317%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724197432%7Cb3334e0f0g0h0i0j0k1l60m60u10070v9770w50111T-9z1I1M1467405377%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fcall-us.svg%7Cb33"
		"34e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb3334e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb3334e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fget-advice.svg%7Cb3335e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F100921"
		"49.json%7Cb3341e0m1T-10z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb3344e0m1I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb3345e0m3I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb3345e0m0K1I11%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fbanking-hub%2Fbanners%2Fkombi_5Fvan_5Fproduct_5Fpromo.jpg%7Cb3348e0f0g0h0i0j0k1l45m46u16097v15797w17703N3O493P276Q488I9M-1132135011%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fass"
		"ets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb3353e0f0g0h0i0j0k25l177m184u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fplaceholder%2FBusget_2520Planner_2520calculator_2520image.png.ampaurendition.1920.0.jpg%7Cb3373e0f0g0h0i0j0k3l159m166u72741v72441w85494I7M1245487009%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb3374e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fs"
		"p.analytics.yahoo.com%2Fsp.pl%7Cb3384e0m6401N3O1P1I7%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb3654e0m7I12%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb3729e0m2I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb3730e0f0g0h0i0j0k1l1m2v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2"
		"Fview%7Cb3732e0f1g108h108i230j122k230l387m391u300I3%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb4652e0m1I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb4655e0m1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb4667e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-sourc"
		"e.min.js%7Cb4667e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb4669e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fwps%2Fgws%2FNetPromoterScore%3FpageId%3Damp_253Abanking%7Cb4679e0f0g0h0i0j0k1l5103m5107u320v20w20T-11z1I1M-592864609%7Chttps%3A%2F%2Fd.la1-c1-syd.salesforceliveagent.com%2Fchat%2Frest%2FSystem%2FMultiNoun.jsonp%7Cb4697e0m5088I12%7Chttps%3A%2F%2Fyourir.in"
		"fo%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb4708e0m2T-12z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb4712e0m159T-13z1I1%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dww6vt7kjp5jf%7Cb4725e0m5065F5208N1Bi0I4%7Ch"
		"ttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb4761e0m5020A1N3I7%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs65232394709390%7Cb4791e0m79I7%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb4797e0m17I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb4807e0m5234I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb4809e0m6I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fs"
		"ignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb4830e0m3I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4831e0m4957I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4831e0m4957I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb4844e0m5932I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb4845e0m5909I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4873e0m4915I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4873e0m491"
		"5I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4874e0m4915I7%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs64958893837894%7Cb9791e0m32I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb9805e0m952T-14z1I1%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb9830e0f0g0h0i0j0k6l35m44u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D164372419"
		"9155%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%7Cb10043e0m218I7%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb10059e0m200I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb10059e0m200I12%7C11035194.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11035194%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D7403893969109%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_"
		"253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10286c0d400e403f403g403h403i403j403k403l526m528u690v390w489Bi2I4%7C11030517.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11030517%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D5805542943965%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10295c0d392e394f394g394h394i394j394k394l517m518u690v390w489Bi3I4%7C11034081.fls.doubleclick.net%2F..%2Factivityi%5Essrc%3D11034081%5Estype%3Dampmn0%"
		"5Escat%3Dpc_5Ftt00g%5Esord%3D399868901926%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking%3F%7Cb10303c0d383e385f385g385h385i385j385k386l509m510u688v388w488Bi4I4%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb11464e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb11471e0f0g0h0i0j0k"
		"1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb11472e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb11487e0m2830A1N3S2832I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=1$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724210730", 
		LAST);

	web_reg_find("Text=Our banking accounts", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("rb_bf96747ztk_10", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking&bp=3&app=cd4697ba1bc4a478&crc=707742931&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C18%7C_event_%7C1643724221562%7C_wv_%7CAAI%7C1%7CfIS%7C27178%7CfID%7C1$rId=RID_-909487734$rpId=226671080$domR=1643724205812$tvn=%2Fbanking$tvt=1643724194351$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking$title=Banking%20-%20AMP%20Bank$latC=1$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324197256_54$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724223571", 
		LAST);

	lr_end_transaction("S01_T01_ClickOnBanking",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T02_ClickOnSavingsAccount_UnderBankingPage");

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
		"Body={\"requestId\":\"49c6763e24834270a6906e81efe3dbb8\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics "
		"Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking/savings-accounts\",\"referringUrl\":\"https://www.amp.com.au/banking\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"70673313952007354231088583865990664449\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y\"},\"analytics\":{\"logging\":\"server_side\",\"supplementalDataId"
		"\":\"21AEA097CA3B1C8B-0C742F81F0746CC3\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts\"}}]}}", 
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
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID=61b218eca79bef95&liveness=delayed", 
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
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app=cd4697ba1bc4a478&crc=3087581382&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CSavings%20accounts%7CC%7C-%7C324197256_54%7C1643724367512%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%7C%7C%7C%2Fbanking%7C1643724194351%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724368533%7C1643724373586%7Cdn%7C1286%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2C2%7C11%7C_event_%7C1643724368533%7C_vc_%7CV%7C1230%5Epc%7CVCD%7C1203%7CVCDS%7C2%7CVCS%7C5108%7CVCO%7C6119%7CVCI%7C0%7CVE%7C1121%5Ep467%5Ep1599%5Eps%5Esdiv.ps%3Ediv%3An"
		"th-child%282%29%7CS%7C909%2C2%7C12%7C_event_%7C1643724368533%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg.banner-wrapper--rates-rhs%7ClcpS%7C875059%7ClcpT%7C2308%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C2308%7Cfp%7C2308%7Ccls%7C0%7Clt%7C962%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724369217%7C1643724369705%7Cdn%7C1242%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%"
		"2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369219e0f1g27h27i316j67k316l481m482u2706v2406w7447T-1z11I1%7Cxcs%7C488%7Cxce%7C488%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643724369330%7C1643724369392%7Cdn%7C1222%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb16437243"
		"69332e0m1T-2z11I1%7Cxcs%7C60%7Cxce%7C61%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724369380%7C1643724369536%7Cdn%7C1226%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369387e0f0g0h0i0j0k1l123m125u10070v9770w50111T-3z11I1M-159043271%7Cxcs%7C153%7Cxce%7C156%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643724369578%7C1643724370207%7Cdn%7C1277%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3"
		"D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369581e0m617T-4z11I1%7Cxcs%7C628%7Cxce%7C629%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724369582%7C1643724369703%7Cdn%7C1239%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724369586e0m1T-5z11I1%7Cxcs%7C120%7Cxce%7C121%2C2%7C7%7Cx%7Cxhr%7Cx%7C1"
		"643724370215%7C1643724370515%7Cdn%7C1284%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%26tim%3D1643724369805%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%26cv%3D20220129-3-RELEASE%26tos%3D742981%26ssd%3D3%26scd%3D81%26vi%3D1643724369798%26ri%3Da50c78988635c1bdc994c3a3d67cba97%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82"
		"bd-e50681f939e4-tuct8f2bf73_1643723251_1643724370_CIi3jgYQy7xLGIbf7azrLyACKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96Q...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C299%7Cxce%7C299%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643724370302%7C1643724371699%7Cdn%7C1284%7Cxu%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724370306e0m1392T-6z11I1%7Cxcs%7C1397%7Cxce%7C1397%2C2%7C9%7Cx"
		"%7Cxhr%7Cx%7C1643724371699%7C1643724373586%7Cdn%7C1286%7Cxu%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724371701e0m1885T-7z11I1%7Cxcs%7C1887%7Cxce%7C1887%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C10%7C_onload_%7C_load_%7C-%7C1643724372033%7C1643724372036%7Cdn%7C1285%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C13%7C_event_%7C1643724368533%7C_"
		"view_%7Csvn%7C%2Fbanking%7Csvt%7C1643724194351%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-788520561$rpId=-1556384750$domR=1643724372031$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724368533e3f3g3h3i3j3k5l545m546o1004p1004q1053r3498s3500t3503u20204v19904w155695M-1556384750$ni=4g|6.9$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title="
		"High%20Interest%20Saving%20Accounts%20-%20AMP$latC=2$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724374858", 
		LAST);

	web_custom_request("rb_bf96747ztk_12", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app=cd4697ba1bc4a478&crc=1674882816&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$rt="
		"1-1643724368533%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb575e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb575e0f0g0h0i0j0k1l1m3v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb575e0f0g0h0i0j0m0u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs"
		"%2Fgranite%2Futils.js%7Cb575e0f0g0h0i0j0m0u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb575e0f0g0h0i0j0m0u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb575e0f0g0h0i0j0m0u8810v8510w24519K1I12M-1911738036%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb575e0f0g0h0i0j0k1l1m2v2180w11909K1I11M-1515373129"
		"%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb575e0f0g0h0i0j0k1l2m2v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%7Cb576e0m191I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb576e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-lo"
		"go.svg%7Cb576e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fyourir.info%2F61b218eca79bef95.js%7Cb576e0m193I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb576e0f0g0h0i0j0k121l182m205u130826v130526w431873K1I12M-938627940%7Chttps%3A%2F%2Fc.la1-c1-syd.salesforceliveagent.com%2Fcontent%2Fg%2Fjs%2F51.0%2Fdeployment.js%7Cb576e0m185K1I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb576e0"
		"f0g0h0i0j0m0u5737v5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb647e0f0g0h0i0j0k117l138m139u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb663e0m109I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb678e0m99I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb686e0f1g27h27i316j67k316l481"
		"m482u2706v2406w7447T-1z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb688e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb688e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb688e0f0g0h0i0j0k1l20m21u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb724e0f0g0h0i0j0m0u4"
		"4956v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb724e0f0g0h0i0j0m0u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb725e0f0g0h0i0j0m0u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb725e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.a"
		"u%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb725e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb725e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb725e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fa"
		"ssets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb725e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D86731391071%3F%7Cb738e0f26g238h238i398j238k241l857m858u12250v11950w31898K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb759e0f0g0h0i0j0m0u28019v27719w186470E1F870756O1519P590Q3840R1400I9M-305230292%7Chttps%3A%2F%"
		"2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fmy-amp.jpg%7Cb762e0f0g0h0i0j0k4l48m62u16909v16609w16798N3O389P276Q488I9M1463103859%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fdebit-card.jpg%7Cb763e0f0g0h0i0j0k6l62m62u13999v13699w13869N3O389P276Q488I9M1020678291%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fimages%2Fthumbnail%2Fsavings-calculator.jpg%7Cb763e0f0g0h0i0j0k9l61m62u22128v21828w21977N3O389P276Q488I9M-1336411013%7Chttps%3A%2F"
		"%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb791e0m4I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb792e0m4I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb792e0m3K1I11%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb799e0m1T-2z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb802e0m2I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724369252%7"
		"Cb854e0f0g0h0i0j0k1l123m125u10070v9770w50111T-3z1I1M-159043271%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fcall-us.svg%7Cb854e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb854e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb855e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcon"
		"tent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fget-advice.svg%7Cb855e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb859e0m869N3O1P1I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb912e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb984e0m2I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb992e0m1I12%7Chttps%3A%2F%2F"
		"assets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb1005e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb1006e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb1007e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%"
		"2F%2Fd.la1-c1-syd.salesforceliveagent.com%2Fchat%2Frest%2FVisitor%2FSettings.jsonp%7Cb1019e0m646I12%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dr9i0v3tdrqpq%7Cb1029e0m567F5208N1Bi0I4%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb1048e0m617T-4z1I1%7Chttps"
		"%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb1053e0m1T-5z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb1145e0m448A1N3I7%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb1221e0m2I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb1226e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb1231e0m1I12%7Chttps%3A%2F%2Fconnect.facebook.net%"
		"2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb1263e0m2I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1263e0m507I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1263e0m507I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb1277e0m387I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb1278e0m2178I7%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb1595e0m4I12%"
		"7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb1596e0m4I12%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs68684423471537%7Cb1610e0m1555I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m172I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m178I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1670e0m178I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr201109"
		"14%7Cb1677e0m2I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb1678e0f0g0h0i0j0k1l1m1v3159w8094K1I12%7Chttps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb1679e0f1g2h2i110j3k110l282m282u300I3%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb1685e0m296z11I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb1686e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb1686e0m1I12%7C11035194.fls.do"
		"ubleclick.net%2F..%2F..4%5Estype%3Dampwe0%5Escat%3Dpc_5Ftt002%5Esord%3D8302001295895%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1712c0d249e251f251g251h251i251j251k251l362m366u700v400w508Bi2I4%7C11030517.fls.doubleclick.net%2F..%2F..7%5Estype%3Dampba0%5Escat%3Dpc_5Ftt01k%5Esord%3D6100204458533%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsav"
		"ings-accounts%7Cb1722c0d239e241f241g241h241i241j241k241l353m356u700v400w508Bi3I4%7C11034081.fls.doubleclick.net%2F..%2F..1%5Estype%3Dampmn0%5Escat%3Dpc_5Ftt00g%5Esord%3D3268237875934%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1741c0d221e223f223g223h223i223j223k223l333m337u702v402w508Bi4I4%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Cb1773e0m1392T-6z1I1%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Dj"
		"s%26pid%3D3230396%26time%3D1643724369745%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts%7Cb1934e0m188I7%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Cb3168e0m1885T-7z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs68951476384456%7Cb3457e0m41I7%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pag"
		"es03.net%7Cb3501e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3506e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3508e0f0g0h0i0j0k0l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb3524e0m2780A1N3S2781I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title="
		"High%20Interest%20Saving%20Accounts%20-%20AMP$latC=1$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724376915", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("rb_bf96747ztk_13", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts&bp=3&app=cd4697ba1bc4a478&crc=376999922&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C14%7C_event_%7C1643724379324%7C_wv_%7CAAI%7C1%7CfIS%7C10790%7CfID%7C0$rId=RID_-788520561$rpId=-1556384750$domR=1643724372031$tvn=%2Fbanking%2Fsavings-accounts$tvt=1643724368533$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|6.9$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts$title=High%20Interest%20Saving%20Accounts%20-%20AMP$latC=1$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324369139_684$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time="
		"1643724381341", 
		LAST);

	web_reg_find("Text=AMP Saver Account", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("versions_2", 
		"URL=https://yourir.info/api/v5/versions?appID=61b218eca79bef95&libVersion=1.11.6&st=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/banking/savings-accounts", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S01_T02_ClickOnSavingsAccount_UnderBankingPage",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T03_ClickOnLearnMore_UnderAMPSaverAccount_UnderProductSection");

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
		"Body={\"requestId\":\"da4169dae8064c4ba33903fb3508a100\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics "
		"Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking/savings-accounts/amp-saver-account\",\"referringUrl\":\"https://www.amp.com.au/banking/savings-accounts\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"70673313952007354231088583865990664449\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y\"},\"analytics\":{\"logging\":\""
		"server_side\",\"supplementalDataId\":\"76BA93F56BF9DA7A-3B7D04782F4452A4\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}]}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_14", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app=cd4697ba1bc4a478&crc=4294028882&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"d%7C-1%7CLearn%20more%7CC%7C-%7C324369139_684%7C1643724556679%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%7C%7C%7C%2Fbanking%2Fsavings-accounts%7C1643724368533%2C1%7C1%7C_load_%7C_load_%7C-%7C1643724556696%7C1643724561716%7Cdn%7C1357%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2C2%7C11%7C_event_%7C1643724556696%7C_vc_%7CV%7C990%5Epc%7CVCD%7C1195%7CVCDS%7C2%7CVCS%7C5078%7CVCO%7C6087%7CVCI%7C0%"
		"7CVE%7C1354%5Ep740%5Ep792%5Eps%5Esa.cookie-notification__btn-close%3Espan.amp-icon-cancel%3Afirst-child%7CS%7C863%2C2%7C12%7C_event_%7C1643724556696%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banner-wrapper.banner-wrapper--rates.banner-wrapper--full-bg%7ClcpS%7C963172%7ClcpT%7C1008%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C1008%7Cfp%7C1007%7Ccls%7C0.0731%7Clt%7C1044%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643724557323%7C164372455766"
		"7%7Cdn%7C1304%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557326e0f1g45h45i174j115k175l295m296u1398v1098w2546T-1z11I1%7Cxcs%7C344%7Cxce%7C344%2C2%7C3%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643724557592%7C1643724557709%7Cdn%7C1320%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.j"
		"s%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557628e0f0g0h0i0j0k1l67m68u10070v9770w50111T-2z11I1M362168065%7Cxcs%7C114%7Cxce%7C117%2C2%7C4%7Cx%7Cxhr%7Cx%7C1643724557749%7C1643724557799%7Cdn%7C1322%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557754e0m1T-3z11I1%7Cxcs%7C47%7Cxce%7C50%2C2%7C5%7Cx%7Cxhr%7Cx%7C1643724557882%7C1643724557987%7Cdn%7C1338%7Cxu%7C"
		"https%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724557969e0m1T-4z11I1%7Cxcs%7C103%7Cxce%7C105%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643724557969%7C1643724557988%7Cdn%7C1338%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb16437245579"
		"72e0m1T-5z11I1%7Cxcs%7C18%7Cxce%7C19%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643724558417%7C1643724558720%7Cdn%7C1355%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%252Fsavings-accounts%26tim%3D1643724557995%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fwww.amp.com.au%252Fbanking%252Fsavings-accounts%26cv%3D20220129-3-RELEASE%26tos%3D842521%26ssd%3D4%26scd%3D81%26vi%3D1643724557988%"
		"26ri%3Dd1e0de780a477456bbe84b7a5ceb3687%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73_1643723251_1643724558_CIi3jgYQy7xLGKSd-azrLyADKAEwEDiu_...%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxcs%7C303%7Cxce%7C303%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643724558515%7C1643724559880%7Cdn%7C1355%7Cxu%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb"
		"1643724558517e0m1362T-6z11I1%7Cxcs%7C1365%7Cxce%7C1365%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643724559880%7C1643724561716%7Cdn%7C1357%7Cxu%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643724559882e0m1833T-7z11I1%7Cxcs%7C1836%7Cxce%7C1836%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C10%7C_onload_%7C_load_%7C-%7C1643724560173%7C1643724560176%7Cdn%7C1356%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg"
		"%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C1%7C13%7C_event_%7C1643724556696%7C_view_%7Csvn%7C%2Fbanking%2Fsavings-accounts%7Csvt%7C1643724368533%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-399517870$rpId=-42293618$domR=1643724560171$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643724556696e3f3g3h3i3j3k4l473m478o1013p1013q1032r3475s3477t3480u22245v21945w161079M-42293618$ni=4g|10$di=1$fd="
		"j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=2$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724562982", 
		LAST);

	web_custom_request("rb_bf96747ztk_15", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app=cd4697ba1bc4a478&crc=2848283588&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|10$di=1$rt="
		"1-1643724556696%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb503e0f0g0h0i0j0m0u106769v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb503e0f0g0h0i0j0k14l39m42u43675v43375w348255K1I11M-1741269429%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb503e0f0g0h0i0j0m0u88342v88042w294660K1I12M-559587166%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fc"
		"lientlibs%2Fgranite%2Futils.js%7Cb503e0f0g0h0i0j0k14l55m56u11037v10737w48607K1I12M982644732%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb504e0f0g0h0i0j0k17l64m64u1273v973w2408K1I12M1272468365%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb504e0f0g0h0i0j0k20l64m65u8810v8510w24519K1I12M-1911738036%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-libs.css%7Cb504e0f0g0h0i0j0k20l"
		"20m24v2180w11909K1I11M-1515373129%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb504e0f0g0h0i0j0k20l24m24v4872w38911K1I11M155572073%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%7Cb505e0m536I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb505e0f0g0h0i0j0m0u205462v205162w205162E1F6188O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2F"
		"dam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb505e0f0g0h0i0j0m0u174576v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fwinning_5Fribbon_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j0k333l394m408u2551v2251w2251N3O80P80Q150R150I7M2023321959%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fcalendar_5Finvite_5Fdecline_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j0k337l414m421u1145v845w845N3O80P80Q150R150I7M-1653263229%7Chtt"
		"ps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fpaperclip_5Fpurple_5Fteal.svg%7Cb505e0f0g0h0i0j0k341l421m422u1620v1320w1320N3O80P80Q150R150I7M1074679316%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb505e0f0g0h0i0j0k244l274m293u130826v130526w431873K1I12M-416139646%7Chttps%3A%2F%2Fyourir.info%2F61b218eca79bef95.js%7Cb505e0m381I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb505e0f0g0h0i0j0m0u5737v"
		"5437w13188K1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb586e0f0g0h0i0j0k274l341m342u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb608e0m280I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb622e0m267I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3D9718afa41c444baba0f511ec35ad6975%26version%3D2.3.2%7Cb630e0f1g45h45i174j115k175l295m296u1398v1098w2"
		"546T-1z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb640e0m0I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb640e0f0g0h0i0j0m0u1135v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb641e0f0g0h0i0j0k1l27m28u300I9M-1570890603%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb690e0f0g0h0i0j0m0u44956v44656w44656"
		"I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-icons.ttf%7Cb690e0f0g0h0i0j0m0u58404v58104w58104I9M-56312974%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F5c32de29c638fdf3bb4adc662a0ad595.woff2%7Cb690e0f0g0h0i0j0m0u83682v83382w83382I9M308654172%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb690e0f0g0h0i0j0m0u77073v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesign"
		"s%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb691e0f0g0h0i0j0m0u96382v96082w96082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb691e0f0g0h0i0j0m0u14680v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb691e0f0g0h0i0j0m0u15180v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d"
		"1fb3ce824a7aad5e07ba2513.ttf%7Cb691e0f0g0h0i0j0m0u27780v27480w27480I9M-1121560565%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D920795069201%3F%7Cb841e0f46g59h59i195j69k84l430m431u12245v11945w31894K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643724557381%7Cb932e0f0g0h0i0j0k1l67m68u10070v9770w50111T-2z1I1M362168065%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fd"
		"ata%2Ficons%2Fcall-us.svg%7Cb932e0f0g0h0i0j0m0u1703v1403w1403I7M1602830574%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffaq.svg%7Cb933e0f0g0h0i0j0m0u2630v2330w2330I7M-1001153296%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Ffind-a-form.svg%7Cb933e0f0g0h0i0j0m0u3714v3414w3414I7M1227801715%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Fget-advice.svg%7Cb933e0f0g0h0i0j0m0u1648v1348w1348I7M391139267%7Chttps%3A%2F%2Fwww.am"
		"p.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb935e0f0g0h0i0j0m0u28019v27719w186470E1F869460O1519P634Q3840R1400I9M-305230292%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemtYaGs126MiZpBA-UFUIcVXSCEkx2cmqvXlWqWuU6F.woff2%7Cb948e0f55g93h93i327j95k327l351m358u48136v47836w47836I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb990e0f0g0h0i0j0m0u1682v1382w1382E1F1296O36P36Q150R150I7M970894330%7Ch"
		"ttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb995e0m74I12%7Chttps%3A%2F%2Fsnap.licdn.com%2Fli.lms-analytics%2Finsight.min.js%7Cb999e0m1I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb1014e0f0g0h0i0j0k1l1m1v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb1014e0f0g0h0i0j0k1l1m1v294w616I12%7Chttps%3A"
		"%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC437f2575c2574fa1b6401b69d97f4744-source.min.js%7Cb1015e0f0g0h0i0j0k1l29m31u564v264w404I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb1017e0f0g0h0i0j0k1l1m1v488w824I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb1046e0m10I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb1048e0m7K1I11%7Chttps%3A%2F%2Fs.yimg.c"
		"om%2Fwi%2Fconfig%2F10092149.json%7Cb1058e0m1T-3z1I1%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb1061e0m3I12%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb1095e0m176A1N3I7%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb1104e0m692N3O1P1I7%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb1109e0m3I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb1121e0m150I12%7Chttps%3"
		"A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb1125e0m2I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb1128e0m114I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb1273e0m1T-4z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb1276e0m1T-5z1I1%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Famp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs6483"
		"6830226271%7Cb1288e0m26I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb1302e0m372I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7Cb1303e0m2171I7%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb1305e0m3I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb1305e0f0g0h0i0j0k1l1m2v3159w8094K1I12%7Cht"
		"tps%3A%2F%2Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb1308e0f1g297h297i431j316k432l597m597u300I3%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb1320e0m360I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1320e0m388I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1320e0m388I7%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%2"
		"6v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dhecank325gm9%7Cb1698e0m247F5208N1Bi4I4%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb1717e0m1I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb1717e0m2I12%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb1724e0m300z11I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb1724e0m1I12%7Chttps%3A%2F%2Fcdn.taboola.com%"
		"2Fscripts%2Feid.js%7Cb1725e0m1I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb1730e0m15I7%7C11035194.fls.doubleclick.net%2F..%2F.._5Ftt002%5Esord%3D1024228811222%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1786c0d347e351f351g351h351i351j351k351l462m466u710v410w528Bi0I4%7C110305"
		"17.fls.doubleclick.net%2F..%2F.._5Ftt01k%5Esord%3D5359016372465%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1798c0d335e339f339g339h339i339j339k339l449m453u707v407w528Bi1I4%7C11034081.fls.doubleclick.net%2F..%2F.._5Ftt00g%5Esord%3D1856080237196%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-a"
		"ccount%7Cb1808c0d324e328f328g328h328i328j328k328l439m442u710v410w528Bi2I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01a%5Esord%3D8128658426669%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1816c0d316e320f320g320h320i320j320k320l434m440u709v409w528Bi3I4%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Cb1821e0m1362T-6z1I1%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D32303"
		"96%26time%3D1643724557809%26url%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb1909e0m245I7%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Cb3186e0m1833T-7z1I1%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb3477e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffav"
		"icon.ico%7Cb3483e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb3485e0f0g0h0i0j0k0l0m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb3501e0m2771A1N3S2772I7$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v="
		"10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724565031", 
		LAST);

	web_reg_find("Text=AMP Saver Account", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_custom_request("rb_bf96747ztk_16", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app=cd4697ba1bc4a478&crc=3664237637&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C14%7C_event_%7C1643724574870%7C_wv_%7CAAI%7C1%7CfIS%7C18126%7CfID%7C1$rId=RID_-399517870$rpId=-42293618$domR=1643724560171$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643724556696$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|10$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app=cd4697ba1bc4a478$vi=TAEGRSBDMHKOUBPKPGPWVQAPOVFTIFIK-0$fId=324557227_972$v=10231211201155045$vID="
		"1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643724576876", 
		LAST);

	lr_end_transaction("S01_T03_ClickOnLearnMore_UnderAMPSaverAccount_UnderProductSection",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T04_ClickOnOpenAnAccount");

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
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.6.0&d_fieldgroup=AAM&d_rtbd=json&d_ver=2&d_orgid=11BA6EA55322342B0A490D44%40AdobeOrg&d_nsid=0&d_mid=70673313952007354231088583865990664449&d_blob=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&ts=1643724732742", 
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
		"Body={\"requestId\":\"08ff0f057dcd435ea0c8e6410b0ce40a\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"secure.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD "
		"Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"referringUrl\":\"https://www.amp.com.au/banking/savings-accounts/amp-saver-account\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"70673313952007354231088583865990664449\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y\"},\"analytics\""
		":{\"logging\":\"server_side\",\"supplementalDataId\":\"76109A75D5F94342-1A72C321BB83A283\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"}}]}}", 
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
		"Body={\"requestId\":\"af3bb2bed6a34f98a5e717978b355120\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"secure.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD "
		"Graphics Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"referringUrl\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"70673313952007354231088583865990664449\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y\"},\"analytics\":{\""
		"logging\":\"server_side\",\"supplementalDataId\":\"40CEFC28B6674B1C-72DA9DFEB1E4E4A7\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"}}]}}", 
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

	web_reg_find("Text=Reach your savings goal faster when you deposit $250 or more each month", 
		LAST);

	web_reg_find("Text=Tell us whether you're new to AMP", 
		LAST);

	web_reg_find("Text=Who's this account for?", 
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

	lr_think_time(5);

	lr_start_transaction("S01_T05_ClickNewApplication");

	lr_end_transaction("S01_T05_ClickNewApplication",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T06_ClickNewCustomer");

	lr_end_transaction("S01_T06_ClickNewCustomer",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T07_ClickJustMe");

	web_reg_find("Text=Product Features: Applicant 1", 
		LAST);

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

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

	lr_end_transaction("S01_T07_ClickJustMe",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T08_ClickOnProceed_UnderImportantInfoSection");

	web_reg_find("Text=Tell us about yourself", 
		LAST);

	web_custom_request("save_2", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":null,\"surName\":null,\"dateOfBirth\":null,\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":null,\"Query\":null},\"middleName\":null},\"contactDetails\":{\"emailAddress\""
		":null,\"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":null,\"query\":null},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":null,\"streetName\":null,\"streetType\":{\"SelectedItem\""
		":null,\"Query\":null},\"poBox\":null,\"suburb\":null,\"state\":{\"SelectedItem\":null,\"Query\":null},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":null,\"dpid\":null,\"barcode\":null,\"isInternational\":false},\"isItPoBox\":null},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\""
		"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[null,null],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\""
		"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest rate\\\\nThe ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t include\\\\n\\\\nThe bonus "
		"interest rate if you deposit less than $250 each month\\\\nA cheque book, Bank@Post or digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13"
		":59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T08_ClickOnProceed_UnderImportantInfoSection",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T09_EnterPersonalDetails_ClickOk");

	web_custom_request("save_3", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"James\",\"surName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\""
		"contactDetails\":{\"emailAddress\":null,\"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":null,\"query\":null},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":null,\"streetName\":null,"
		"\"streetType\":{\"SelectedItem\":null,\"Query\":null},\"poBox\":null,\"suburb\":null,\"state\":{\"SelectedItem\":null,\"Query\":null},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":null,\"dpid\":null,\"barcode\":null,\"isInternational\":false},\"isItPoBox\":null},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,"
		"\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[null,null],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\""
		"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest rate\\\\nThe ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t "
		"include\\\\n\\\\nThe bonus interest rate if you deposit less than $250 each month\\\\nA cheque book, Bank@Post or digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\""
		"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T09_EnterPersonalDetails_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T10_SearchResidentialAddress_ClickOk");

	web_revert_auto_header("Origin");

	web_add_auto_header("Content-Type", 
		"application/json");

	web_add_auto_header("caller", 
		"saver-account");

	web_custom_request("Unit%2084%20George%20Street%2C%20BATHURST%20%20NSW%20%2027", 
		"URL=https://secure.amp.com.au/ddc/public/api/qas/doSearch/AUS/Unit%2084%20George%20Street%2C%20BATHURST%20%20NSW%20%2027?residentialOnly=true", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("Unit%2084%20George%20Street%2C%20BATHURST%20%20NSW%20%20279", 
		"URL=https://secure.amp.com.au/ddc/public/api/qas/doSearch/AUS/Unit%2084%20George%20Street%2C%20BATHURST%20%20NSW%20%20279?residentialOnly=true", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("Unit%2084%20George%20Street%2C%20BATHURST%20%20NSW%20%202795", 
		"URL=https://secure.amp.com.au/ddc/public/api/qas/doSearch/AUS/Unit%2084%20George%20Street%2C%20BATHURST%20%20NSW%20%202795?residentialOnly=true", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("AUS%7C9a82b8a7-931e-4496-a026-b4baffaecacb%7C7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42", 
		"URL=https://secure.amp.com.au/ddc/public/api/qas/doGetAddress/AUS/AUS%7C9a82b8a7-931e-4496-a026-b4baffaecacb%7C7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42?partialAddress=Unit%2084%20George%20Street,%20BATHURST%20%20NSW%20%202795", 
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
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"James\",\"surName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\""
		"contactDetails\":{\"emailAddress\":null,\"mobilePhone\":null,\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"AUS|9a82b8a7-931e-4496-a026-b4baffaecacb|7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42\",\"query\":\"Unit 84 George Street, BATHURST  NSW  2795\"},\"manualAddress\":"
		"{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"84\",\"streetName\":\"George\",\"streetType\":{\"SelectedItem\":\"ST\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"Bathurst\",\"state\":{\"SelectedItem\":\"NSW\",\"Query\":\"NSW\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"2795\",\"dpid\":\"46986746\""
		",\"barcode\":\"1301011120302220211120333230332121013\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[\"Unit 84 George Street, BATHURST  NSW  2795\",\"Unit 84 George Street, BATHURST  NSW  2795\""
		"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\""
		"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest rate\\\\nThe ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t include\\\\n\\\\nThe bonus interest rate if you deposit less than $250 each month\\\\nA cheque book, Bank@Post or "
		"digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\""
		"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T10_SearchResidentialAddress_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T11_EnterContactDetails_ClickOk");

	web_revert_auto_header("Origin");

	web_custom_request("save_5", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"James\",\"surName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\""
		"contactDetails\":{\"emailAddress\":\"xyz@abc.com\",\"mobilePhone\":\"0434123456\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"AUS|9a82b8a7-931e-4496-a026-b4baffaecacb|7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42\",\"query\":\"Unit 84 George Street, BATHURST  NSW  2795"
		"\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"84\",\"streetName\":\"George\",\"streetType\":{\"SelectedItem\":\"ST\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"Bathurst\",\"state\":{\"SelectedItem\":\"NSW\",\"Query\":\"NSW\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"2795\""
		",\"dpid\":\"46986746\",\"barcode\":\"1301011120302220211120333230332121013\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":null,\"ok\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[\"Unit 84 George Street, BATHURST  NSW  2795\",\"Unit 84 George Street,"
		" BATHURST  NSW  2795\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\""
		"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest rate\\\\nThe ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t include\\\\n\\\\nThe bonus interest rate if you deposit less than $250 each "
		"month\\\\nA cheque book, Bank@Post or digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\""
		"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T11_EnterContactDetails_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T12_ClickYesOnTFN");

	lr_end_transaction("S01_T12_ClickYesOnTFN",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T13_ClickOK_On_TFN");

	web_add_header("Origin", 
		"https://secure.amp.com.au");

	web_custom_request("save_6", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"James\",\"surName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\""
		"contactDetails\":{\"emailAddress\":\"xyz@abc.com\",\"mobilePhone\":\"0434123456\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"AUS|9a82b8a7-931e-4496-a026-b4baffaecacb|7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42\",\"query\":\"Unit 84 George Street, BATHURST  NSW  2795"
		"\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"84\",\"streetName\":\"George\",\"streetType\":{\"SelectedItem\":\"ST\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"Bathurst\",\"state\":{\"SelectedItem\":\"NSW\",\"Query\":\"NSW\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"2795\""
		",\"dpid\":\"46986746\",\"barcode\":\"1301011120302220211120333230332121013\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":null,\"addresses\":[\"Unit 84 George Street, BATHURST  NSW  2795\","
		"\"Unit 84 George Street, BATHURST  NSW  2795\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":null},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\""
		"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest rate\\\\nThe ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t include\\\\n\\\\nThe bonus interest rate if you deposit"
		" less than $250 each month\\\\nA cheque book, Bank@Post or digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\""
		"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T13_ClickOK_On_TFN",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T14_Select_No_On_ForeignTaxResident");

	lr_end_transaction("S01_T14_Select_No_On_ForeignTaxResident",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T15_ClickOk");

	web_url("individual", 
		"URL=https://secure.amp.com.au/ddc/public/api/api-crs/AUS/individual?resCountry=AUS&postalCountry=AUS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://secure.amp.com.au");

	web_custom_request("save_7", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"James\",\"surName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\""
		"contactDetails\":{\"emailAddress\":\"xyz@abc.com\",\"mobilePhone\":\"0434123456\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"AUS|9a82b8a7-931e-4496-a026-b4baffaecacb|7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42\",\"query\":\"Unit 84 George Street, BATHURST  NSW  2795"
		"\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"84\",\"streetName\":\"George\",\"streetType\":{\"SelectedItem\":\"ST\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"Bathurst\",\"state\":{\"SelectedItem\":\"NSW\",\"Query\":\"NSW\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"2795\""
		",\"dpid\":\"46986746\",\"barcode\":\"1301011120302220211120333230332121013\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"Unit 84 George Street, "
		"BATHURST  NSW  2795\",\"Unit 84 George Street, BATHURST  NSW  2795\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":null,\"Query\":null},\"sourceOfFundsForAccount\":{\"SelectedItem\":null,\"Query\":null},\"reasonForOpeningAccount\":{\"SelectedItem\":null,\"Query\":null}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\""
		":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest rate\\\\nThe ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t include\\\\n\\\\nThe bonus interest rate if you"
		" deposit less than $250 each month\\\\nA cheque book, Bank@Post or digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}]"
		",\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T15_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T16_SelectExtraDetailsFromTheDropDownRelatedToIncome_ClickOk");

	web_revert_auto_header("Origin");

	web_custom_request("save_8", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"James\",\"surName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\""
		"contactDetails\":{\"emailAddress\":\"xyz@abc.com\",\"mobilePhone\":\"0434123456\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"AUS|9a82b8a7-931e-4496-a026-b4baffaecacb|7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42\",\"query\":\"Unit 84 George Street, BATHURST  NSW  2795"
		"\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"84\",\"streetName\":\"George\",\"streetType\":{\"SelectedItem\":\"ST\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"Bathurst\",\"state\":{\"SelectedItem\":\"NSW\",\"Query\":\"NSW\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"2795\""
		",\"dpid\":\"46986746\",\"barcode\":\"1301011120302220211120333230332121013\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"Unit 84 George Street, "
		"BATHURST  NSW  2795\",\"Unit 84 George Street, BATHURST  NSW  2795\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":\"WIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"sourceOfFundsForAccount\":{\"SelectedItem\":\"FIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"reasonForOpeningAccount\":{\"SelectedItem\":\"EB\""
		",\"Query\":\"Everyday banking (e.g. regular deposits and withdrawals for everyday expenses)\"}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":null,\"verificationStatus\":null},\"creditHeaderCheckbox\":null}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest "
		"rate\\\\nThe ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t include\\\\n\\\\nThe bonus interest rate if you deposit less than $250 each month\\\\nA cheque book, Bank@Post or digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian "
		"Credit Licence 234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T16_SelectExtraDetailsFromTheDropDownRelatedToIncome_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T17_SelectCheckBoxToVerifyIdentityByCreditBureau_ClickOk");

	web_add_header("Origin", 
		"https://secure.amp.com.au");

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
		"Body={\"title\":\"Mr\",\"firstName\":\"James\",\"middleNames\":\"\",\"lastName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"email\":\"xyz@abc.com\",\"address\":{\"country\":\"AU\",\"state\":\"NSW\",\"streetName\":\"George\",\"flatNumber\":\"\",\"streetNumber\":\"84\",\"suburb\":\"Bathurst\",\"postcode\":\"2795\",\"streetType\":\"ST\",\"townCity\":\"\"},\"extraData\":[{\"name\":\"dnb-credit-header-consent-given\",\"value\":\"true\"}]}", 
		LAST);

	web_add_header("Content-Type", 
		"application/json");

	web_custom_request("token", 
		"URL=https://secure.amp.com.au/ddc/public/api/green-id/token?verificationId=UuPzDYb5", 
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
		"Body={\"accountId\":\"amp_au\",\"apiCode\":\"F2x-L5D-7wW-EY4\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"origin\":\"simpleui\"}", 
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
		"Body={\"accountId\":\"amp_au\",\"apiCode\":\"F2x-L5D-7wW-EY4\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"sourceId\":\"nswregodvs\",\"origin\":\"simpleui\"}", 
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
		"Body=[{\"message\":\"Setting overrides\",\"overrides\":\"sessionCompleteCallback sessionCancelledCallback enableBackButtonWarning enableCancelButton \",\"verificationId\":\"\",\"verificationToken\":\"\",\"accountId\":\"\",\"version\":\"\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:07:728\"},{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 "
		"Safari/537.36\",\"winHeight\":\"841\",\"docHeight\":\"6078\",\"winWidth\":\"1519\",\"docWidth\":\"1519\",\"url\":\"https://secure.amp.com.au/ddc/public/ui/saver-account/\",\"message\":\"Client Info\",\"verificationId\":\"\",\"verificationToken\":\"\",\"accountId\":\"\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:07:730\"},{\"message\":\"Entered show\",\"verificationId\":\"\",\""
		"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:483\"},{\"message\":\"Entered handleStartSuccess\",\"verificationId\":\"\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":"
		"\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:907\"},{\"accountId\":\"amp_au\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"attemptId\":\"\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"platform\":\"Windows\",\"message\":\"greenID Web - Start workflow point\",\"pointOfInterest\":\"HandleStartSuccess\",\"poiOrder\":\"10\",\""
		"verificationId\":\"\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:907\"},{\"message\":\"dl is the next source, with order 0\",\"verificationId\":\"\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\""
		"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"dl\",\"message\":\"Loading first source\",\"verificationId\":\"\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"dl\",\"message\":\"Entered getFields: \",\""
		"verificationId\":\"\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:10:915\"},{\"source\":\"nswregodvs\",\"message\":\"Entered showFields Form: nswregodvs\",\"verificationId\":\"\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"accountId\":\"amp_au\",\"version\":"
		"\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\"2022-02-02 01:36:11:778\"},{\"message\":\"Entered initiateSourceyThings: nswregodvs\",\"verificationId\":\"\",\"verificationToken\":\"d86d1ee104a9ba25946c4ae8045e6f05cda323a6\",\"accountId\":\"amp_au\",\"version\":\"22.0201.0_d71edcbb_87\",\"logId\":\"wryu9603\",\"level\":\"INFO\",\"logSessionId\":\"ffa5cfac-3e26-4723-9b7b-73b3f66b19fa\",\"datetime\":\""
		"2022-02-02 01:36:12:308\"}]", 
		LAST);

	lr_end_transaction("S01_T17_SelectCheckBoxToVerifyIdentityByCreditBureau_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T18_ClickOnSkipIDCheck_ClickOk");

	lr_end_transaction("S01_T18_ClickOnSkipIDCheck_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T19_ClickOk");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("save_9", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"James\",\"surName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\""
		"contactDetails\":{\"emailAddress\":\"xyz@abc.com\",\"mobilePhone\":\"0434123456\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"AUS|9a82b8a7-931e-4496-a026-b4baffaecacb|7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42\",\"query\":\"Unit 84 George Street, BATHURST  NSW  2795"
		"\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"84\",\"streetName\":\"George\",\"streetType\":{\"SelectedItem\":\"ST\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"Bathurst\",\"state\":{\"SelectedItem\":\"NSW\",\"Query\":\"NSW\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"2795\""
		",\"dpid\":\"46986746\",\"barcode\":\"1301011120302220211120333230332121013\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"Unit 84 George Street, "
		"BATHURST  NSW  2795\",\"Unit 84 George Street, BATHURST  NSW  2795\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":\"WIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"sourceOfFundsForAccount\":{\"SelectedItem\":\"FIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"reasonForOpeningAccount\":{\"SelectedItem\":\"EB\""
		",\"Query\":\"Everyday banking (e.g. regular deposits and withdrawals for everyday expenses)\"}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":\"UuPzDYb5\",\"verificationStatus\":\"IN_PROGRESS\"}}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest rate\\\\nThe "
		"ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t include\\\\n\\\\nThe bonus interest rate if you deposit less than $250 each month\\\\nA cheque book, Bank@Post or digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence "
		"234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":null,\"acceptTandCsDeclaration\":null,\"acceptCRSDeclaration\":null}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T19_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T20_SelectCheckBoxForDeclarations_ClickOk");

	web_reg_find("Text=Review your AMP Saver Account application", 
		LAST);

	web_custom_request("save_10", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/save?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"welcome\":{\"tags\":\"[\\\\\"customer\\\\\"]\",\"continueApplication\":null,\"newApplication\":true},\"newOrExistingCustomer\":{\"customerType\":\"New\"},\"captcha\":{},\"adviser\":{},\"singleOrJoint\":{\"applicationType\":\"Individual\"},\"applicants\":[{\"personalDetails\":{\"basicInfo\":{\"firstName\":\"James\",\"surName\":\"Dummy\",\"dateOfBirth\":\"14/04/1992\",\"scvId\":null,\"hasAdpId\":null,\"title\":{\"SelectedItem\":\"Mr\",\"Query\":\"Mr\"},\"middleName\":null},\""
		"contactDetails\":{\"emailAddress\":\"xyz@abc.com\",\"mobilePhone\":\"0434123456\",\"homePhone\":null},\"address\":{\"addresses\":{\"isAnyAddressInternational\":false,\"residentialAddress\":{\"isManualSearch\":false,\"search\":{\"selectedItem\":\"AUS|9a82b8a7-931e-4496-a026-b4baffaecacb|7.730uOAUSHAzlBwAAAAAIAgEAAAAADXjb0AAgAAAAAAEAVW5pdAAAAP..UwAAAAD.....AAAAAAAAAAAAAAAAAAAAVW5pdCA4NCBHZW9yZ2UgU3RyZWV0LCBCQVRIVVJTVCAgTlNXICAyNzk1AAAAAAA-$42\",\"query\":\"Unit 84 George Street, BATHURST  NSW  2795"
		"\"},\"manualAddress\":{\"country\":{\"SelectedItem\":\"AUS\",\"Query\":\"Australia\"},\"addressLine1\":null,\"addressLine2\":null,\"buildingName\":null,\"floorNumber\":null,\"unitNumber\":null,\"subBuildingNumber\":null,\"streetNumber\":\"84\",\"streetName\":\"George\",\"streetType\":{\"SelectedItem\":\"ST\",\"Query\":\"Street\"},\"poBox\":null,\"suburb\":\"Bathurst\",\"state\":{\"SelectedItem\":\"NSW\",\"Query\":\"NSW\"},\"ruralDelivery\":null,\"city\":null,\"province\":null,\"postCode\":\"2795\""
		",\"dpid\":\"46986746\",\"barcode\":\"1301011120302220211120333230332121013\",\"isInternational\":false},\"isItPoBox\":false},\"postalAndResidentialAreSame\":true},\"editLocked\":null,\"externallyMaintainedAddress\":null}},\"furtherQuestions\":{\"taxFileNumber\":{\"hasTaxFileNumber\":true,\"ok\":true,\"taxFileNumber\":null,\"change\":null},\"foreignTaxResident\":{\"attempts\":0,\"addressFDN\":\"applicants.0.personalDetails.address\",\"crsStatus\":\"pass\",\"addresses\":[\"Unit 84 George Street, "
		"BATHURST  NSW  2795\",\"Unit 84 George Street, BATHURST  NSW  2795\"],\"countries\":[\"AUS\",\"AUS\"],\"entityType\":\"individual\",\"isForeignTaxResident\":false},\"reasonablenessOutcome\":{\"ok\":null},\"amlQuestions\":{\"primarySourceOfWealth\":{\"SelectedItem\":\"WIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"sourceOfFundsForAccount\":{\"SelectedItem\":\"FIE\",\"Query\":\"Income from employment (regular and/or bonus)\"},\"reasonForOpeningAccount\":{\"SelectedItem\":\"EB\""
		",\"Query\":\"Everyday banking (e.g. regular deposits and withdrawals for everyday expenses)\"}}},\"identityCheck\":{\"identity\":{\"greenIdIdentityCheck\":{\"verificationId\":\"UuPzDYb5\",\"verificationStatus\":\"IN_PROGRESS\"}}},\"tmdQuestions\":{\"disclaimer\":{\"aemContent\":\"\\\\nAMP Saver Account\\\\nThis product includes\\\\n\\\\nA competitive savings rate\\\\nEasy online access to your money\\\\nThe requirement to deposit at least $250 each month to receive the bonus interest rate\\\\nThe "
		"ability to link your savings account to an everyday transaction account\\\\n\\\\nThis product doesn\\xE2\\x80\\x99t include\\\\n\\\\nThe bonus interest rate if you deposit less than $250 each month\\\\nA cheque book, Bank@Post or digital wallet facilities\\\\nNo restriction on pay anyone amounts\\\\n\\\\nA target market determination for this product is available at www.amp.com.au/bank/tmd\\\\nThe product issuer is AMP Bank Limited ABN 15081 596 009,\\xC2\\xA0 AFSL and Australian Credit Licence "
		"234517. \\xC2\\xA9 Copyright 2021 AMP Limited. All rights reserved.\\\\n\",\"productSelection\":\"Proceed\",\"updatedDate\":\"Fri Sep 24 2021 13:59:44 GMT+1000\"}}}],\"accountDetails\":{\"preferences\":{},\"declarations\":{\"lastStep\":{\"privacyDeclaration\":true,\"acceptTandCsDeclaration\":true,\"acceptCRSDeclaration\":true}}},\"review\":{},\"personalOrSoleTrader\":{\"accountType\":\"personal\"}}", 
		LAST);

	lr_end_transaction("S01_T20_SelectCheckBoxForDeclarations_ClickOk",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("S01_T21_ClickCancelApplication");

	web_custom_request("cancel", 
		"URL=https://secure.amp.com.au/ddc/public/api/forms/cancel?formId=8810578662&checkSecurityToken=e718de77-e0e2-48ab-a369-6f3f4b280b0e&formName=SaverAccount&checkDob=14/04/1992&checkName=Dummy", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://secure.amp.com.au/ddc/public/ui/saver-account/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		LAST);

	web_revert_auto_header("Origin");

	web_reg_find("Text=AMP Saver Account - AMP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("amp-saver-account_2", 
		"URL=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://secure.amp.com.au/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("id_3", 
		"URL=https://dpm.demdex.net/id?d_visid_ver=4.5.2&d_fieldgroup=AAM&d_rtbd=json&d_ver=2&d_orgid=11BA6EA55322342B0A490D44%40AdobeOrg&d_nsid=0&d_mid=70673313952007354231088583865990664449&d_blob=6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y&ts=1643726688697", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_custom_request("delivery_8", 
		"URL=https://ampserviceslimited.tt.omtrdc.net/rest/v1/delivery?client=ampserviceslimited&sessionId=c0e628ff17d542ed96155f80dfbda007&version=2.3.2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body={\"requestId\":\"d55aeb0d2cfb49fc8c7b1a4bf06e65f8\",\"context\":{\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36\",\"timeOffsetInMinutes\":660,\"channel\":\"web\",\"screen\":{\"width\":1536,\"height\":960,\"orientation\":\"landscape\",\"colorDepth\":24,\"pixelRatio\":2.5},\"window\":{\"width\":1536,\"height\":841},\"browser\":{\"host\":\"www.amp.com.au\",\"webGLRenderer\":\"ANGLE (Intel, Intel(R) UHD Graphics "
		"Direct3D11 vs_5_0 ps_5_0, D3D11-27.20.100.9749)\"},\"address\":{\"url\":\"https://www.amp.com.au/banking/savings-accounts/amp-saver-account\",\"referringUrl\":\"https://secure.amp.com.au/\"}},\"id\":{\"tntId\":\"9718afa41c444baba0f511ec35ad6975.36_0\",\"marketingCloudVisitorId\":\"70673313952007354231088583865990664449\"},\"experienceCloud\":{\"audienceManager\":{\"locationHint\":8,\"blob\":\"6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y\"},\"analytics\":{\"logging\":\"server_side\",\""
		"supplementalDataId\":\"5225192D834AEFA9-40DD5AF44C39FEE8\",\"trackingServer\":\"amp.d2.sc.omtrdc.net\",\"trackingServerSecure\":\"amp.d2.sc.omtrdc.net\"}},\"execute\":{\"pageLoad\":{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}},\"prefetch\":{\"views\":[{\"parameters\":{\"user.categoryId\":\"banking\"},\"profileParameters\":{\"pageName\":\"banking:savings accounts:amp saver account\"}}]}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://www.amp.com.au");

	web_url("amp.asx_4", 
		"URL=https://yourir.info/api/v5/symbols/amp.asx?appID=61b218eca79bef95&liveness=delayed", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Adobe AudienceManager", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("dest5.html_2", 
		"URL=https://ampserviceslimited.demdex.net/dest5.html?d_nsid=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://www.amp.com.au");

	web_url("versions_3", 
		"URL=https://yourir.info/api/v5/versions?appID=61b218eca79bef95&libVersion=1.11.6&st=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("rb_bf96747ztk_17", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app=cd4697ba1bc4a478&crc=3332600271&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a="
		"1%7C1%7C_load_%7C_load_%7C-%7C1643726685722%7C1643726694083%7Cdn%7C1358%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Clr%7Chttps%3A%2F%2Fsecure.amp.com.au%2F%2C2%7C15%7C_event_%7C1643726685722%7C_vc_%7CV%7C3495%5Epc%7CVCD%7C1197%7CVCDS%7C2%7CVCS%7C8422%7CVCO%7C9435%7CVCI%7C0%7CVE%7C152%5Ep744%5Ep1296%5Eps%5Esdiv.media-block.image-template.cookie-ill%3Eimg.image-template%3Afirst-child%7CS%7C3272%2C2%7C16%7C_event_%7C1643726685722%7C_wv_%7ClcpE%7CDIV%7ClcpSel%7Cdiv.wp.banne"
		"r-wrapper.banner-wrapper--rates.banner-wrapper--full-bg%7ClcpS%7C875059%7ClcpT%7C4195%7ClcpU%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cfcp%7C4195%7Cfp%7C4195%7Ccls%7C0%7Clt%7C1209%2C2%7C2%7Cx%7Cxhr%7Cx%7C1643726688698%7C1643726689786%7Cdn%7C1333%7Cxu%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%3Fd_visid_ver%3D4.5.2%26d_fieldgroup%3DAAM%26d_rtbd%3Djson%26d_ver%3D2%26d_orgid%3D11BA6EA55322342B0A490D44%2540AdobeOrg%26d_nsid%3D0%26d_mid%"
		"3D70673313952007354231088583865990664449%26d_blob%3D6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%26ts%3D1643726688697%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726688701e0m1064T-1z11I1%7Cxcs%7C1082%7Cxce%7C1088%2C2%7C3%7Cx%7Cxhr%7Cx%7C1643726688792%7C1643726689788%7Cdn%7C1333%7Cxu%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%3Fclient%3Dampserviceslimited%26sessionId%3Dc0e628ff17d542ed96155f80dfbda007%26version%3D2.3.2%7Csv"
		"trg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726688794e0f1g25h25i549j51k549l969m973u1398v1098w2546T-2z11I1%7Cxcs%7C996%7Cxce%7C996%2C2%7C4%7Cj1.12.4-aem%7Cxhr%7Cj1.12.4-aem%7C1643726689079%7C1643726689223%7Cdn%7C1316%7Cxu%7C%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689085e0f0g0h0i0j0k1l93m101u10070v9770w50111T-3z11I1M193472992%7Cxcs%7C138%7Cxce%7C144%2C2%7C5%7Cx%7Cxh"
		"r%7Cx%7C1643726689114%7C1643726689869%7Cdn%7C1344%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689119e0m739T-4z11I1%7Cxcs%7C755%7Cxce%7C755%2C2%7C6%7Cx%7Cxhr%7Cx%7C1643726689119%7C1643726689227%7Cdn%7C1315%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5E"
		"sh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689122e0m1T-5z11I1%7Cxcs%7C108%7Cxce%7C108%2C2%7C7%7Cx%7Cxhr%7Cx%7C1643726689311%7C1643726689873%7Cdn%7C1344%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689313e0m545T-6z1I1%7Cxcs%7C561%7Cxce%7C562%2C2%7C8%7Cx%7Cxhr%7Cx%7C1643726689313%7C1643726689331%7Cdn%7C1323%7Cxu%7Chttps%3A%2F%2Fyourir.in"
		"fo%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689316e0m1T-7z1I1%7Cxcs%7C16%7Cxce%7C18%2C2%7C9%7Cx%7Cxhr%7Cx%7C1643726689817%7C1643726689868%7Cdn%7C1344%7Cxu%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726689846e0m1T-8z11I1%7Cxcs%7C49%7Cxce%7C51%2C2%7C10%7Cx%7Cxhr%7Cx%7C1643726690469%"
		"7C1643726690789%7Cdn%7C1356%7Cxu%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%3Fen%3Dpage_view%26item-url%3Dhttps%253A%252F%252Fsecure.amp.com.au%252F%26tim%3D1643726689388%26ui%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26ref%3Dhttps%253A%252F%252Fsecure.amp.com.au%252F%26cv%3D20220129-3-RELEASE%26tos%3D907713%26ssd%3D4%26scd%3D81%26vi%3D1643726689378%26ri%3D7cb1c027b6939c81502688881317066a%26sd%3Dv2_ab8cc1e2063b15704fc42f263c180661_3a61b933-3010-484d-82bd-e50681f939e4-tuct8"
		"f2bf73_1643723251_1643726690_CIi3jgYQy7xLGOKo-63rLyAEKAEwEDiu_QZA8IUQSNnR1wNQipoCWABgAGjJ5ITkztCf96QBcAE%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726690471e0m317T-9z11I1%7Cxcs%7C320%7Cxce%7C320%7Crc%7C204%7Crm%7CNo%20Content%2C2%7C11%7Cx%7Cxhr%7Cx%7C1643726690878%7C1643726690900%7Cdn%7C1356%7Cxu%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D61b218eca79bef95%26libVersion%3D1.11.6%26st%3D1%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7C"
		"i1%5Esk0%5Esh0%7Cxrt%7Cb1643726690880e0m19T-10z11I1%7Cxcs%7C21%7Cxce%7C22%2C2%7C12%7Cx%7Cxhr%7Cx%7C1643726692000%7C1643726692173%7Cdn%7C1357%7Cxu%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726692002e0m168T-11z11I1%7Cxcs%7C172%7Cxce%7C173%2C2%7C13%7C_onload_%7C_load_%7C-%7C1643726692164%7C1643726692165%7Cdn%7C1357%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%2C2%7C14%7Cx%7Cxhr%7Cx%7C1643726692173%7C"
		"1643726694083%7Cdn%7C1358%7Cxu%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Csvtrg%7C1%7Csvm%7Ci1%5Esk0%5Esh0%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0%7Cxrt%7Cb1643726692174e0m1908T-12z11I1%7Cxcs%7C1910%7Cxce%7C1910%7Crc%7C204%7Crm%7CNo%20Content%2C1%7C17%7C_event_%7C1643726685722%7C_view_%7Ctvtrg%7C1%7Ctvm%7Ci1%5Esk0%5Esh0$rId=RID_-399517870$rpId=-1133835358$domR=1643726692161$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643726685722$tvm="
		"i1%3Bk0%3Bh0$tvtrg=1$w=1536$h=841$sw=1536$sh=960$nt=a0b1643726685722e3f4g32h32i1090j56k1090l2665m2668o3418p3418q3476r6440s6442t6443u22245v21945w161082M-1133835358$ni=4g|7$di=1$fd=j1.12.4^sb11-50$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=545$app=cd4697ba1bc4a478$vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0$fId=326688573_370$v=10231211201155045$vID=1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$nVAT=1$time=1643726695356", 
		LAST);

	web_custom_request("rb_bf96747ztk_18", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app=cd4697ba1bc4a478&crc=1386311267&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643726685722$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|7$di=1$rt="
		"1-1643726685722%3Bhttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2Flaunch-36c302166c9d.min.js%7Cb2696e0f0g0h0i0j0k1l1m133v106469w422722K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.css%7Cb2696e0f2g2h2i101j23k123l152m174u43675v43375w348255K1I11M-240775390%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery.js%7Cb2697e0f0g0h0i0j0k133l205m385u88342v88042w294660K1I12M1312506500%7Chttps%3A%2F%2Fwww.amp.com.au%2Fe"
		"tc.clientlibs%2Fclientlibs%2Fgranite%2Futils.js%7Cb2697e0f0g0h0i0j0k174l257m431u11037v10737w48607K1I12M-1567325341%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc.clientlibs%2Fclientlibs%2Fgranite%2Fjquery%2Fgranite.js%7Cb2697e0f0g0h0i0j0k175l234m509u1273v973w2408K1I12M571963658%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fswiftype-libs.js%7Cb2697e0f0g0h0i0j0k179l236m237u8810v8510w24519K1I12M215253248%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp%2FclientLibraries%2Ficons-lib"
		"s.css%7Cb2697e0f81g81h81i120j81k128l163m164u2480v2180w11909K1I11M-959652868%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.css%7Cb2697e0f100g100h100i131j100k132l172m174u5172v4872w38911K1I11M-302924829%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi.js%3Frender%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%7Cb2697e0m766I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo-reversed.svg%7Cb2697e0f0g0h0i0j0k509l509m509v205162w205162E1F61"
		"88O119P52I7M-2002543844%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Ficons%2Famp-logo.svg%7Cb2697e0f0g0h0i0j0k512l512m513v174276w174276N3O120P53Q284R125I7M1804469827%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fwinning_5Fribbon_5Fpurple_5Fteal.svg%7Cb2697e0f0g0h0i0j0k512l513m520v2251w2251N3O80P80Q150R150I7M2023321959%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fcalendar_5Finvite_5Fdecline_5Fpurple_5Fteal.svg%7Cb2698e0f0g"
		"0h0i0j0k513l513m520v845w845N3O80P80Q150R150I7M-1653263229%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Fclientlib-site.js%7Cb2698e0f0g0h0i0j0k444l471m490u130826v130526w431873K1I12M-1236435719%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fillustrations%2Fpaperclip_5Fpurple_5Fteal.svg%7Cb2698e0f0g0h0i0j0k513l513m520v1320w1320N3O80P80Q150R150I7M1074679316%7Chttps%3A%2F%2Fyourir.info%2F61b218eca79bef95.js%7Cb2698e0m520I12%7Chttps%3A%2F%2Fajax.googleapis.com%2Fajax%"
		"2Flibs%2Fwebfont%2F1.6%2Fwebfont.js%7Cb2698e0f0g0h0i0j0k496l496m496v5437w13188K1I12%7Chttps%3A%2F%2Fdpm.demdex.net%2Fid%7Cb2979e0m1064T-1z1I1%7Chttps%3A%2F%2Fassets.adobedtm.com%2Fextensions%2FEPbde2f7ca14e540399dcc1f8208860b7b%2FAppMeasurement.min.js%7Cb2984e0f230g249h249i656j284k656l1055m1062u300v12184w33462I12%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fytc.js%7Cb3002e0m1044I12%7Chttps%3A%2F%2Fbat.bing.com%2Fbat.js%7Cb3059e0m1339I12%7Chttps%3A%2F%2Fampserviceslimited.tt.omtrdc.net%2Frest%2Fv1%2Fdelivery%"
		"3Fclient%3Dampserviceslimited%26sessionId%3Dc0e628ff17d542ed96155f80dfbda007%26version%3D2.3.2%7Cb3072e0f1g25h25i549j51k549l969m973u1398v1098w2546T-2z1I1%7Chttps%3A%2F%2Fhello.myfonts.net%2Fcount%2F3a2740%7Cb3073e0m1I9%7Chttps%3A%2F%2Ffonts.googleapis.com%2Fcss%3Ffamily%3DOpen%2BSans%3A400italic%5Ec600italic%5Ec400%5Ec300%5Ec600%7Cb3073e0f0g0h0i0j0k1l1m1v835w13161I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fddc%2Fpublic%2Fui%2Fassets%2Fddc-fonts%2Fddc-fonts.css%7Cb3073e0f0g0h0i0j0k1l51m52u300v2043w10164I9M"
		"-1570890603%7Chttps%3A%2F%2Fad.doubleclick.net%2Fddm%2Fadj%2FN962361.197812NSO.CODESRV%2FB22590592.244647881%5Essz%3D1x2%5Esord%3D602246962242%3F%7Cb3209e0f8g94h94i248j109k130l371m372u12241v11941w31894K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F819af3d3abdc9f135d49b80a91e2ff4c.woff2%7Cb3212e0f0g0h0i0j0k3l5m7v14880w14880I9M982811444%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F98c3ea22ad6bca213fa88175f7d9ffaf.woff2%7Cb3212e0f0g0h0i0j0k3l5m8v96082w9"
		"6082I9M-838756943%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F33543c5cc5d88f5695dd08c87d280dfd.woff2%7Cb3213e0f0g0h0i0j0k3l5m6v14380w14380I9M164575225%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2Fce62fa71a1a38af297b433e85d36d83f.woff2%7Cb3214e0f0g0h0i0j0k2l3m7v76773w76773I9M-549783882%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Fpromotion-banner%2Fbanner-background-1.jpg%7Cb3280e0f0g0h0i0j0k23l56m57v27719w186470E1F869460O1519P63"
		"4Q3840R1400I9M-305230292%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fassets%2F2525a15d1fb3ce824a7aad5e07ba2513.ttf%7Cb3282e0f0g0h0i0j0k54l55m56v27480w27480I9M-1121560565%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemtYaGs126MiZpBA-UFUIcVXSCEkx2cmqvXlWqWuU6F.woff2%7Cb3305e0f0g0h0i0j0k31l32m32v47836w47836I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fetc%2Fdesigns%2Famp-au%2Fclientlibs%2Flegacy-nps.js%3F_5F%3D1643726688855%7Cb3363e0f0g0h0i0j0k1l93m101u10070v9770w50111T-3z1I1M1934729"
		"92%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.js%7Cb3391e0m3I12%7Chttps%3A%2F%2Fyourir.info%2Flib%2F1.11.6%2Fyourir.css%7Cb3392e0m2K1I11%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb3397e0m739T-4z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb3400e0m1T-5z1I1%7Chttps%3A%2F%2Fconnect.facebook.net%2Fen_5FUS%2Ffbevents.js%7Cb3404e0m98I12%7Chttps%3A%2F%2Fsnap.licd"
		"n.com%2Fli.lms-analytics%2Finsight.min.js%7Cb3409e0m2I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRCce8829d1b0864836959f2942d3dd958c-source.min.js%7Cb3419e0f0g0h0i0j0k37l41m46v389w681I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC76fbf82869ad44e7917ee6ef2913fdf3-source.min.js%7Cb3419e0f0g0h0i0j0k39l43m46v294w616I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC437f2575c2574fa1"
		"b6401b69d97f4744-source.min.js%7Cb3420e0f0g0h0i0j0k38l43m45v264w404I12%7Chttps%3A%2F%2Fassets.adobedtm.com%2F30cb14f656a0%2F7a08285d48a4%2F22d635351ece%2FRC15a5c6f5e8cb4510b7d70763e430d359-source.min.js%7Cb3422e0f0g0h0i0j0k39l41m44v488w824I12%7Chttps%3A%2F%2Ffonts.gstatic.com%2Fs%2Fopensans%2Fv27%2FmemvYaGs126MiZpBA-UvWbX2vVnXBbObj2OVTS-muw.woff2%7Cb3477e0f0g0h0i0j0k1l1m1v44656w44656I9%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fdata%2Fillustrations%2FCookies.svg%7Cb3494e0f0g0h0i0j0k"
		"1l1m1v1382w1382E2F1296O36P36Q150R150I7M970894330%7Chttps%3A%2F%2Fwww.gstatic.com%2Frecaptcha%2Freleases%2FdPctOHA2ifhWm5WzFM_5FB5TjT%2Frecaptcha_5F_5Fen.js%7Cb3535e0m3I12%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F131169910928083%3Fv%3D2.9.52%26r%3Dstable%7Cb3547e0m33I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.asx%3FappID%3D61b218eca79bef95%26liveness%3Ddelayed%7Cb3591e0m545T-6z1I1%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fsymbols%2Famp.nzx%3FappID%3D61b218eca79bef95%2"
		"6liveness%3Ddelayed%7Cb3594e0m1T-7z1I1%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11035194%7Cb3601e0m447I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Flibtrc%2Funip%2F1236555%2Ftfa.js%7Cb3603e0m2I12%7Chttps%3A%2F%2Fwww.googletagservices.com%2Factiveview%2Fjs%2Fcurrent%2Frx_5Flidar.js%3Fcache%3Dr20110914%7Cb3614e0m787I12%7Chttps%3A%2F%2Fpagead2.googlesyndication.com%2Fpagead%2Fjs%2Fr20220126%2Fr20110914%2Felements%2Fhtml%2Fomrhp.js%7Cb3615e0f0g0h0i0j0k1l1m2v3159w8094K1I12%7Chttps%3A%2F%2"
		"Fgoogleads4.g.doubleclick.net%2Fpcs%2Fview%7Cb3618e0f2g419h419i529j419k530l780m780u300I3%7Chttps%3A%2F%2Fconnect.facebook.net%2Fsignals%2Fconfig%2F2059266084330689%3Fv%3D2.9.52%26r%3Dstable%7Cb3633e0m17I12%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb3634e0m441I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb3634e0m440I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Ftrc%2F3%2Fjson%7Cb3674e0m1071I12%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%26src%3Dtfa%7"
		"Cb3675e0m1558I7%7Chttps%3A%2F%2Fwww.google.com%2Frecaptcha%2Fapi2%2Fanchor%3Far%3D1%26k%3D6Lf1YKQUAAAAAK3RIImnFOQrks8gZnrC7pObqn5q%26co%3DaHR0cHM6Ly93d3cuYW1wLmNvbS5hdTo0NDM.%26hl%3Den%26v%3DdPctOHA2ifhWm5WzFM_5FB5TjT%26size%3Dinvisible%26cb%3Dxlt2krp79or9%7Cb3699e0m700F5208N1Bi0I4%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4047e0m28I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4047e0m28I7%7Chttps%3A%2F%2Fwww.facebook.com%2Ftr%2F%7Cb4047e0m28I7%7Chttps%3A%2F%2Fampserviceslimited.demdex.net%2Fdes"
		"t5.html%3Fd_5Fnsid%3D0%23https_253A_252F_252Fwww.amp.com.au%7Cb4062e0m909Bi2I4%7Chttps%3A%2F%2Fs.yimg.com%2Fwi%2Fconfig%2F10092149.json%7Cb4124e0m1T-8z1I1%7Chttps%3A%2F%2Fsp.analytics.yahoo.com%2Fsp.pl%7Cb4146e0m1096N3O1P1I7%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11030517%26l%3DdataLayer%26cx%3Dc%7Cb4160e0m242I12%7Chttps%3A%2F%2Fwww.googletagmanager.com%2Fgtag%2Fjs%3Fid%3DDC-11034081%26l%3DdataLayer%26cx%3Dc%7Cb4160e0m242I12%7Chttps%3A%2F%2Famp.d2.sc.omtrdc.net%2Fb%2Fss%2Fa"
		"mp-dtm-prd%2F1%2FJS-2.22.0-LBWB%2Fs61235455147040%7Cb4406e0m28I7%7Chttps%3A%2F%2Fbat.bing.com%2Fp%2Faction%2F16012365.js%7Cb4414e0m534I12%7C11035194.fls.doubleclick.net%2F..%2F.._5Ftt002%5Esord%3D2073997459887%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4447c0d335e336f336g336h336i336j336k336l449m454u710v410w528Bi3I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01k%5Esord%3D6590470128139%"
		"5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4459c0d401e404f404g404h404i404j404k404l518m519u710v410w528Bi4I4%7C11034081.fls.doubleclick.net%2F..%2F.._5Ftt00g%5Esord%3D6259894650976%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4468c0d392e394f394g394h394i394j394k395l508m509u710v410"
		"w528Bi5I4%7C11030517.fls.doubleclick.net%2F..%2F.._5Ftt01a%5Esord%3D1931544389553%5Esgtm%3D2od1q0%5Esauiddc%3D1529137724.1643723250%5Es%7Eoref%3Dhttps_253A_252F_252Fwww.amp.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4479c0d381e383f383g383h383i383j383k383l498m498u709v409w528Bi6I4%7Chttps%3A%2F%2Fbat.bing.com%2Faction%2F0%7Cb4502e0m620A1N3I7%7Chttps%3A%2F%2Fpx.ads.linkedin.com%2Fcollect%3Fv%3D2%26fmt%3Djs%26pid%3D3230396%26time%3D1643726689259%26url%3Dhttps_253A_252F_252Fwww.am"
		"p.com.au_252Fbanking_252Fsavings-accounts_252Famp-saver-account%7Cb4624e0m193I7%7Chttps%3A%2F%2Ftrc.taboola.com%2F1236555%2Flog%2F3%2Funip%7Cb4749e0m317T-9z1I1%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Fcds-pips.js%7Cb4750e0m1527I12%7Chttps%3A%2F%2Fcdn.taboola.com%2Fscripts%2Feid.js%7Cb4750e0m2I12%7Chttps%3A%2F%2Fyourir.info%2Fapi%2Fv5%2Fversions%3FappID%3D61b218eca79bef95%26libVersion%3D1.11.6%26st%3D1%7Cb5158e0m19T-10z1I1%7Chttps%3A%2F%2Fpips.taboola.com%2F%7Cb6280e0m168T-11z1I1%7Chttps%3A%2F%2"
		"Fcm.everesttech.net%2Fcm%2Fdd%3Fd_5Fuuid%3D70912296699880610371109647921389160147%7Cb6418e0m20I7%7Chttps%3A%2F%2Fwww.sc.pages03.net%2Flp%2Fstatic%2Fjs%2FiMAWebCookie.js%3F18560ebc-14a40f8eab9-943e27de0c8b91cc3fcf1475c3e5d726%26h%3Dwww.pages03.net%7Cb6442e0m1K1I12%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb6450e0f0g0h0i0j0k1l1m1v1406w1406I22M-1590566809%7Chttps%3A%2F%2Fcds.taboola.com%2F%3Fuid%3D3a61b933-3010-484d-82bd-e50681f939e4-tuct8f2bf73%7Cb64"
		"52e0m1908T-12z1I1%7Chttps%3A%2F%2Fwww.pages03.net%2FWTS%2Fevent.jpeg%7Cb6755e0m2863A1N3S2863I7%7Chttps%3A%2F%2Fwww.amp.com.au%2Fcontent%2Fdam%2Famp-au%2Fauthoring%2Ficons%2Ffavicon.ico%7Cb6755e0f0g0h0i0j0k1l1m2v1406w1406I22M-1590566809$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app=cd4697ba1bc4a478$vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0$fId=326688573_370$v=10231211201155045$vID="
		"1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643726697396", 
		LAST);

	web_custom_request("rb_bf96747ztk_19", 
		"URL=https://www.amp.com.au/rb_bf96747ztk?type=js3&sn=v_4_srv_2_sn_CJ59IOVR9DVHC7U82JIF78CU46Q2H7L9_perc_100000_ol_0_mul_1_app-3Acd4697ba1bc4a478_1&svrid=2&flavor=post&vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0&modifiedSince=1643117181505&rf=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account&bp=3&app=cd4697ba1bc4a478&crc=3056476424&en=o0bm09bh&end=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amp.com.au/banking/savings-accounts/amp-saver-account", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=$a=1%7C18%7C_event_%7C1643726707335%7C_wv_%7CAAI%7C1%7CfIS%7C21579%7CfID%7C1$rId=RID_-399517870$rpId=-1133835358$domR=1643726692161$tvn=%2Fbanking%2Fsavings-accounts%2Famp-saver-account$tvt=1643726685722$tvm=i1%3Bk0%3Bh0$tvtrg=1$ni=4g|7$di=1$url=https%3A%2F%2Fwww.amp.com.au%2Fbanking%2Fsavings-accounts%2Famp-saver-account$title=AMP%20Saver%20Account%20-%20AMP$latC=1$app=cd4697ba1bc4a478$vi=TKFROPCWDRJHMCROCLTGBIARMHKSAHON-0$fId=326688573_370$v=10231211201155045$vID="
		"1643723227151KUCMMM0I7VUSP519LVFBEELFTQ8JCQ4C$time=1643726709344", 
		LAST);

	lr_end_transaction("S01_T21_ClickCancelApplication",LR_AUTO);

	lr_think_time(5);

	return 0;
}