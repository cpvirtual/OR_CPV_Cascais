
	Throttle ( 0 1 0.1 0 
		NumNotches ( 8
			Notch ( 0	        0 Dummy )
			Notch ( 0.142857	0 Dummy )
			Notch ( 0.285714	0 Dummy )
			Notch ( 0.428571	0 Dummy )
			Notch ( 0.571428	0 Dummy )
			Notch ( 0.714285	0 Dummy )
			Notch ( 0.857142	0 Dummy )
			Notch ( 1	        0 Dummy )
		)
	)
	Brake_Train ( 0 1.0 0.01 0.2
		NumNotches ( 9
			Notch ( 0    0 TrainBrakesControllerFullQuickReleaseStart ) Comment ( REL - Release = Should overcharge ATP to 5.40 bar )
			Notch ( 0.01 0 TrainBrakesControllerReleaseStart ) Comment ( RUN - Running = 5.00 bar )
			Notch ( 0.02 0 TrainBrakesControllerEPApplyStart ) Comment ( 1 INIL - Initial = 4.60 bar )
			Notch ( 0.16 0 TrainBrakesControllerEPApplyStart ) Comment ( 2 = 4.35 bar )
			Notch ( 0.40 0 TrainBrakesControllerEPApplyStart ) Comment ( 3 = 4.10 bar )
			Notch ( 0.65 0 TrainBrakesControllerEPApplyStart ) Comment ( 4 = 3.85 bar )
			Notch ( 0.80 0 TrainBrakesControllerEPApplyStart ) Comment ( 5 = 3.60 bar )
			Notch ( 0.99 0 TrainBrakesControllerEPApplyStart ) Comment ( 6 FULL SERV - Full Service = 3.35 bar )
			Notch ( 1.00 0 TrainBrakesControllerEmergencyStart ) Comment ( EMGCY - Emergency )
		)
	)
        Brake_Dynamic ( 0 1 0.2 0
		NumNotches ( 8
			Notch ( 0	        0 Dummy )
			Notch ( 0.142857	0 Dummy )
			Notch ( 0.285714	0 Dummy )
			Notch ( 0.428571	0 Dummy )
			Notch ( 0.571428	0 Dummy )
			Notch ( 0.714285	0 Dummy )
			Notch ( 0.857142	0 Dummy )
			Notch ( 1	        0 Dummy )
		)
	)