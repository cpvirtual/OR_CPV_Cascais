
Comment ( ORTS Diesel Engine for CP 1400 English Electric )
Comment ( *** Diesel Engine *** )
	Type 					( Diesel )
	MaxPower 				( 713kW ) #(* 970cv comprovado em manual de conducao de 1969*)
	MaxVelocity 				( 105kmh ) #(* comprovado em ficha técnica nº7 ed1987*)
	MaxForce 				( 161kN ) #(* comprovado em ficha técnica nº7 ed1987*)
	MaxContinuousForce 			( 142kN ) #(* comprovado em ficha técnica nº7 ed1987*)
	ORTSContinuousForceTimeFactor 		( 3600 )
	MaxDieselLevel 				( 2250l ) #(* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort	( 11.806mph ) #(* comprovado em ficha técnica nº7 ed1987*)
	DieselEngineType 			( electric )

Comment ( *** General *** )
	WheelRadius 				( 0.475m ) #(* comprovado em ficha técnica nº7 ed1987*)
	Sanding 				( 25mph )

	ORTSNumberDriveAxles 			( 4 )
	ORTSDriveWheelWeight 			( 64.4t ) #(* comprovado em ficha técnica nº7 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 			( 1000A ) #(* comprovado em manual de conducao*)
	ORTSElectricTrainSupply ( Mode ( Unfitted ))

Comment (* Calculated with ORTS Diesels calculator by NickonWheels de 5 Maio 2023 *)
Comment (* Cyl Bore (mm)	254						  *)
Comment (* Cyl Stroke (mm)	304.8						  *)
Comment (* Cyl number		12						  *)
Comment (* Eng output (kW)	1330CV						  *)
Comment (* Idle RPM		450 						  *)
Comment (* Max RPM		850 						  *)
Comment (* Notch		8 						  *)
Comment (* Stroke type		4 						  *)
Comment (* Aspiration		Turbocharger 					  *)
Comment (* Injection		Valve 						  *)
Comment (* Maxforce (kN)	157.887065	16100kgf 			  *)
Comment (* Max Speed		80kph 						  *)
Comment ( * SACM-MGO V12 ASHR * )

	
Comment ( * English Electric 8 SVT * )
ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 		( 450 ) #(* comprovado em manual de conducao de 1969*)
		MaxRPM 			( 850 ) #(* comprovado em manual de conducao de 1969*)
		StartingRPM		( 360 )
		StartingConfirmRPM	( 460 )
		ChangeUpRPMpS 		( 50 )
		ChangeDownRPMpS 	( 40 )
		RateOfChangeUpRPMpSS 	( 10 )
		RateOfChangeDownRPMpSS 	( 10 )
		MaximalPower 		( 978213.3375W ) #(* 1330cv comprovado em ficha técnica nº7 ed1987*)
		IdleExhaust 		( 4 ) #( 4-stroke = rpm / 80 )
		MaxExhaust 		( 11 ) #( 4-stroke = rpm / 80 )
		ExhaustDynamics 	( 1.2 )
		ExhaustDynamicsDown 	( 0.5 )
		ExhaustColor 		( 00999792 )
		ExhaustTransientColor 	( FF5B5851 )
		DieselPowerTab (
0	0
450	70008.058532
500	185229.654866
550	300451.2512
600	415672.847534
650	530894.443868
700	646116.040202
750	761337.636536
800	876559.23287
850	991780.829204
		)
		Comment (* Consumo comprovado e calculado a partir de dados da CP de 1983 *)
		DieselConsumptionTab (
			0	0
			450	14
			452	64
			550	98
			650	145
			750	194	
			850	273
		)
		ThrottleRPMTab (
0	450
12.5	500
25	550
37.5	600
50	650
62.5	700
75	750
87.5	800
100	850
		)
		DieselTorqueTab (		
0	0
450	1485.617112
500	3537.625749
550	5216.541906
600	6615.638703
650	7799.48984
700	8814.219385
750	9693.651658
800	10463.154896
850	11142.128342
		)
		MinOilPressure		( 49.781psi ) #(* 3,5 kg.cm2 comprovado em manual de conducao*)
		MaxOilPressure 		( 59.738psi ) #(* 4,2 kg.cm2 comprovado em manual de conducao*)
		MaxTemperature 		( 93.3degC ) #(* comprovado em manual de conducao*)
		Cooling			( 3 ) #( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant		( 720 )
		OptTemperature		( 70degC )
		IdleTemperature		( 54.5degC ) #(* comprovado em manual de conducao*)
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
23.5	0
27	0
30.5554555	0
30.5555555	0
)
0.125	(
0	19735.883125
1	19735.883125
2	19735.883125
3.5	18226.320456
5	12758.424319
7	9113.160228
9	7088.013511
11.5	5547.141008
14	4556.580114
17	3752.477741
20	3189.60608
23.5	2714.558366
27	2362.67117
30.5554555	2087.748998
30.5555555	0
)
0.25	(
0	39471.76625
1	39471.76625
2	39471.76625
3.5	39471.76625
5	29266.82017
7	20904.87155
9	16259.344539
11.5	12724.704422
14	10452.435775
17	8607.888285
20	7316.705042
23.5	6226.983015
27	5419.781513
30.5554555	4789.13171
30.5555555	0
)
0.375	(
0	59207.649375
1	59207.649375
2	59207.649375
3.5	59207.649375
5	49590.536664
7	35421.811903
9	27550.298147
11.5	21561.102897
14	17710.905951
17	14585.45196
20	12397.634166
23.5	10551.178014
27	9183.432716
30.5554555	8114.841663
30.5555555	0
)
0.5	(
0	78943.5325
1	78943.5325
2	78943.5325
3.5	78943.5325
5	73134.904758
7	52239.217684
9	40630.502643
11.5	31797.784677
14	26119.608842
17	21510.266105
20	18283.726189
23.5	15560.618034
27	13543.500881
30.5554555	11967.569058
30.5555555	0
)
0.625	(
0	98679.415625
1	98679.415625
2	98679.415625
3.5	98679.415625
5	98679.415625
7	71081.079302
9	55285.283902
11.5	43266.743923
14	35540.539651
17	29268.679713
20	24878.377756
23.5	21173.087452
27	18428.427967
30.5554555	16284.0824
30.5555555	0
)
0.75	(
0	118415.29875
1	118415.29875
2	118415.29875
3.5	118415.29875
5	118415.29875
7	91751.128239
9	71361.98863
11.5	55848.512841
14	45875.564119
17	37779.876334
20	32112.894884
23.5	27330.123305
27	23787.329543
30.5554555	21019.418207
30.5555555	0
)
0.875	(
0	138151.181875
1	138151.181875
2	138151.181875
3.5	138151.181875
5	138151.181875
7	114100.823056
9	88745.084599
11.5	69452.674904
14	57050.411528
17	46982.691847
20	39935.28807
23.5	33987.479208
27	29581.694866
30.5554555	26139.546877
30.5555555	0
)
1	(
0	157887.065
1	157887.065
2	157887.065
3.5	157887.065
5	157887.065
7	138012.744212
9	107343.245498
11.5	84007.757346
14	69006.372106
17	56828.777028
20	48304.460474
23.5	41110.179127
27	35781.081833
30.5554555	31617.568571
30.5555555	0
)
)
)