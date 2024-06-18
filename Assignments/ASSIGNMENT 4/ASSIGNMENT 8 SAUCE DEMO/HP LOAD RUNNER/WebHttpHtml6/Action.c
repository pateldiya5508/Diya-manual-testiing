Action()
{

	web_url("gts1c3.der", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("gts1c3.der_2", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("RapidSSLTLSRSACAG1.crt", 
		"URL=http://cacerts.rapidssl.com/RapidSSLTLSRSACAG1.crt", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("gtsr1.der", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("gts1c3.der_3", 
		"URL=http://pki.goog/repo/certs/gts1c3.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("gtsr1.der_2", 
		"URL=http://pki.goog/repo/certs/gtsr1.der", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	return 0;
}