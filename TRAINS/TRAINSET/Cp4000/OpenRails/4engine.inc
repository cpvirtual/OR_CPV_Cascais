
Comment ( *** Electric Engine *** )
	Type ( Electric )
	MaxPower ( 1000kW )
	MaxForce ( 350kN )
	MaxContinuousForce ( 300kN )
	MaxVelocity ( 220kph )

	MaxTemperature ( 120 )
	MaxOilPressure ( 90 )

Comment ( *** General *** )
	WheelRadius ( 0.445m )
	Sanding ( 25mph )
	NumWheels ( 4 ) Comment (* 4 axles powered *)
	DoesHornTriggerBell ( 0 )
	ORTSDriveWheelWeight ( 53.8t )

Comment ( *** Electric Motor *** )
	MaxCurrent ( 2000A )
	Antislip ( )

        ORTSContinuousForceTimeFactor ( 3600 )																				
	ORTSTractionCharacteristics (	18	5
		throttle (		0	0.11	0.86	1	)
		table (						
			0km/h	0.00kN	238.00kN	1479.00kN	1700.00kN
			10km/h	0.00kN	147.00kN	913.50kN	1050.00kN	
			20km/h	0.00kN	106.40kN	661.20kN	760.00kN	
			30km/h	0.00kN	84.00kN	522.00kN	600.00kN
			40km/h	0.00kN	63.00kN	391.50kN	450.00kN	
			50km/h	0.00kN	49.00kN	304.50kN	350.00kN	
			60km/h	0.00kN	37.10kN	230.55kN	265.00kN	
			70km/h	0.00kN	31.50kN	195.75kN	225.00kN	
			80km/h	0.00kN	29.18kN	181.36kN	208.46kN	
			90km/h	0.00kN	27.74kN	172.38kN	198.14kN	
			98km/h	0.00kN	26.60kN	165.30kN	190.00kN	
			100km/h	0.00kN	26.14kN	162.47kN	186.74kN	
			110km/h	0.00kN	23.79kN	147.83kN	169.91kN	
			120km/h	0.00kN	21.81kN	135.55kN	155.80kN	
			140km/h	0.00kN	18.62kN	115.71kN	133.00kN	
			150km/h	0.00kN	17.40kN	108.15kN	124.31kN	
			160km/h	0.00kN	15.12kN	93.98kN	108.03kN	
			250km/h	0.00kN	11.93kN	74.15kN	85.23kN	
			)					
		)		

	ORTSDynamicBrakeForceCurves(
	0.0 (
		0.0	0
		3.8	0
		7.5	0
		11.3	0
		12.5	0
		18.8	0
		25.0	0
		31.3	0
		37.5	0
		43.8	0
		50.0	0
		56.3	0
		62.6	0
		68.8	0
	)
	1.0 (
		0.0	0
		3.8	0
		7.5	9000
		11.3	35999
		12.5	47999
		18.8	45332
		25.0	33999
		31.3	27199
		37.5	22666
		43.8	19428
		50.0	17000
		56.3	15111
		62.6	12500
		68.8	182
	 )
	)
