
Comment ( Standard ORTS Diesel Engine for CP 1200 Brissonneau & Lotz )
Comment ( *** Diesel Engine *** )
	Type 					( Diesel )
	MaxPower 				( 442kW )
	MaxVelocity 				( 80kmh )
	MaxForce 				( 156.9064kN )
	MaxContinuousForce 			( 119.64113kN )
	ORTSContinuousForceTimeFactor		( 1800 )
	MaxDieselLevel 				( 2941l ) #(* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort	( 13kph )
	DieselEngineType 			( electric )

Comment ( *** General *** )
	WheelRadius 				( 0.55 ) #(* comprovado em ficha técnica nº6 ed1987*)
	Sanding 				( 25mph )
	NumWheels 				( 4 )
	ORTSNumberDriveAxles 			( 4 )
	ORTSDriveWheelWeight 			( 64.7t ) #(* comprovado em ficha técnica nº6 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 				( 1500A )
	ORTSElectricTrainSupply ( Mode ( Unfitted )) #(* comprovado em ficha técnica nº ed1987*)

Comment (* Calculated with ORTS Diesels calculator by NickonWheels de 5 Maio 2023 *)
Comment (* Cyl Bore (mm)	175						  *)
Comment (* Cyl Stroke (mm)	180						  *)
Comment (* Cyl number		12						  *)
Comment (* Eng output (kW)	825CV						  *)
Comment (* Idle RPM		600 						  *)
Comment (* Max RPM		1500 						  *)
Comment (* Notch		8 						  *)
Comment (* Stroke type		4 						  *)
Comment (* Aspiration		Turbocherger 					  *)
Comment (* Injection		Valve 						  *)
Comment (* Maxforce (kN)	156.9064	16000kgf 			  *)
Comment (* Max Speed		110kph 						  *)
Comment ( * SACM-MGO V12 ASHR * )

ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 		( 600 ) #(* não comprovado*)
		MaxRPM 			( 1500 ) #(* comprovado em ficha técnica nº6 ed1987*)
		StartingRPM		( 500 )
		StartingConfirmRPM	( 650 ) #(* não comprovado *)
		ChangeUpRPMpS 		( 20 )
		ChangeDownRPMpS 	( 20 )
		RateOfChangeUpRPMpSS 	( 5 )
		RateOfChangeDownRPMpSS	( 5 )
		MaximalPower 		( 606786.46875W ) #(* 825cv comprovado em ficha técnica nº6 ed1987*)
		IdleExhaust 		( 7.5 ) #( 4-stroke = rpm / 80 )
		MaxExhaust 		( 18.75 ) #( 4-stroke = rpm / 80 )
		ExhaustDynamics 	( 1.0 )
		ExhaustDynamicsDown 	( 0.5 )
		ExhaustColor 		( 11454545 )
		ExhaustTransientColor 	( 11515151 )
		DieselPowerTab ( 
			0	0
			600	32810.79435
			712.5	105609.744313
			825	178408.694276
			937.5	251207.644239
			1050	324006.594202
			1162.5	396805.544166
			1275	469604.494129
			1387.5	542403.444092
			1500	615202.394055
		)
		DieselConsumptionTab ( 
			0	0
			600	10.160064
			712.5	27.940177
			825	45.720289
			937.5	63.500401
			1050	81.280514
			1162.5	99.060626
			1275	116.840739
			1387.5	134.620851
			1500	152.400963
		)
		ThrottleRPMTab ( 
			0	600
			12.5	712.5
			25	825
			37.5	937.5
			50	1050
			62.5	1162.5
			75	1275
			87.5	1387.5
			100	1500
		)
		DieselTorqueTab ( 
			0	0
			600	522.2
			712.5	1415.436842
			825	2065.063636
			937.5	2558.78
			1050	2946.7
			1162.5	3259.53871
			1275	3517.170588
			1387.5	3733.024324
			1500	3916.5
		)
		MinOilPressure		( 43.5113psi )
		MaxOilPressure 		( 101.526psi )
		MaxTemperature 		( 95degC )
		Cooling			( 3 ) #( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant	( 720 )
		OptTemperature		( 73degC )
		IdleTemperature		( 54.5degC )
	)

ORTSMaxTractiveForceCurves (
0	(
0	0
1	0
2	0
3.5	0
5	0
7	0
9	0
11.5	0
14	0
17	0
20	0
22.2221222	0
22.2222222	0
)
0.125	(
0	19613.3
1	19613.3
2	18185.721006
3.5	10391.840575
5	7274.288402
7	5195.920287
9	4041.271335
11.5	3162.734088
14	2597.960144
17	2139.496589
20	1818.572101
22.2221222	1636.722257
22.2222222	0
)
0.25	(
0	39226.6
1	39226.6
2	39226.6
3.5	24826.728611
5	17378.710028
7	12413.364305
9	9654.838904
11.5	7555.960882
14	6206.682153
17	5111.385302
20	4344.677507
22.2221222	3910.227356
22.2222222	0
)
0.375	(
0	58839.9
1	58839.9
2	58839.9
3.5	42813.62122
5	29969.534854
7	21406.81061
9	16649.741585
11.5	13030.232545
14	10703.405305
17	8814.569075
20	7492.383713
22.2221222	6743.175693
22.2222222	0
)
0.5	(
0	78453.2
1	78453.2
2	78453.2
3.5	63763.526634
5	44634.468644
7	31881.763317
9	24796.927024
11.5	19406.290715
14	15940.881658
17	13127.784895
20	11158.617161
22.2221222	10042.800647
22.2222222	0
)
0.625	(
0	98066.5
1	98066.5
2	98066.5
3.5	87307.432713
5	61115.202899
7	43653.716357
9	33952.8905
11.5	26571.827348
14	21826.858178
17	17975.059676
20	15278.800725
22.2221222	13750.982546
22.2222222	0
)
0.75	(
0	117679.8
1	117679.8
2	117679.8
3.5	113186.949113
5	79230.864379
7	56593.474557
9	44017.146877
11.5	34448.201904
14	28296.737278
17	23303.195406
20	19807.716095
22.2221222	17827.024725
22.2222222	0
)
0.875	(
0	137293.1
1	137293.1
2	137293.1
3.5	137293.1
5	98845.745855
7	70604.104182
9	54914.303253
11.5	42976.411241
14	35302.052091
17	29072.278193
20	24711.436464
22.2221222	22240.392921
22.2222222	0
)
1	(
0	156906.4
1	156906.4
2	156906.4
3.5	156906.4
5	119853.172605
7	85609.409003
9	66585.095892
11.5	52110.075046
14	42804.704502
17	35250.933119
20	29963.293151
22.2221222	26967.085215
22.2222222	0
)
)
)

