
		Throttle ( 0 1 0.034 0 
                	NumNotches ( 0 )
            	)
	Brake_Train ( 0 1 0.0125 0.5 
		NumNotches ( 6
			Notch ( 0       0 TrainBrakesControllerReleaseStart )
			Notch ( 0.2	0 TrainBrakesControllerHoldLappedStart )
			Notch ( 0.25    1 TrainBrakesControllerGraduatedSelfLapLimitedHoldingStart )
			Notch ( 0.85    0 TrainBrakesControllerSuppressionStart )
			Notch ( 0.9     0 TrainBrakesControllerContinuousServiceStart )
			Notch ( 0.95    0 TrainBrakesControllerEmergencyStart )
		)
	)
	Brake_Dynamic ( 0 1 0.0125 0 
		NumNotches( 0
		)
	)
	