
Comment (* Curvas de tracção calculadas com recurso ao ORTS Diesels calculator by NickonWheels de 5 Maio 2023 *)
Comment ( Standard ORTS Diesel Engine for CP 1900 Alsthom )
Comment ( *** Diesel Engine *** )
	Type 					( Diesel )
	MaxPower 				( 1662kW ) #(* comprovado em ficha técnica nº12 ed1987*)
	MaxVelocity 				( 100kmh ) #(* comprovado em ficha técnica nº12 ed1987*)
	MaxForce 				( 388kN ) #(* comprovado em ficha técnica nº12 ed1987*)
	MaxContinuousForce 			( 251kN ) #(* comprovado em ficha técnica nº12 ed1987*)
	ORTSContinuousForceTimeFactor		( 1800 )
	MaxDieselLevel 				( 4600l ) #(* comprovado em manual de conducao*)
	DieselEngineSpeedOfMaxTractiveEffort	( 23.2kph )
	DieselEngineType 			( electric )

Comment ( *** General *** )
	WheelRadius 				( 0.55m ) #(* comprovado em ficha técnica nº12 ed1987*)
	Sanding 				( 25mph )
	NumWheels 				( 6 )
	ORTSNumberDriveAxles 			( 6 )
	ORTSDriveWheelWeight 			( 117t ) #(* comprovado em ficha técnica nº12 ed1987*)

Comment ( *** Electric Motor *** )
	MaxCurrent 			( 1600A )
	ORTSElectricTrainSupply ( Mode ( Unfitted ))
	
Comment ( * SACM-AGO V12 DSHR * )
ORTSDieselEngines ( 1
	Diesel(
		IdleRPM 		( 600 ) #(* comprovado em manual de conducao*)
		MaxRPM 			( 1350 ) #(* comprovado em ficha técnica nº12 ed1987*)
		StartingRPM		( 500 )
		StartingConfirmRPM	( 650 ) #(* comprovado em manual de conducao*)
		ChangeUpRPMpS 		( 20 )
		ChangeDownRPMpS 	( 20 )
		RateOfChangeUpRPMpSS 	( 5 )
		RateOfChangeDownRPMpSS	( 5 )
		MaximalPower 		( 2206496W ) #(* 3000cv comprovado em ficha técnica nº12 ed1987*)
		IdleExhaust 		( 7.5 ) #( 4-stroke = rpm / 80 )
		MaxExhaust 		( 17 ) #( 4-stroke = rpm / 80 )
		ExhaustDynamics 	( 2.0 )
		ExhaustDynamicsDown 	( 0.5 )
		ExhaustColor 		( 11454545 )
		ExhaustTransientColor 	( 11515151 )
DieselPowerTab ( 
0	0
600	132568.866059
693.75	395635.209645
787.5	658701.553231
881.25	921767.896817
975	1184834.240403
1068.75	1447900.583989
1162.5	1710966.927575
1256.25	1974033.271161
1350	2237099.614747
)
DieselConsumptionTab ( 
0	0
600	43.528593
693.75	111.542019
787.5	179.555446
881.25	247.568872
975	315.582299
1068.75	383.595725
1162.5	451.609151
1256.25	519.622578
1350	587.636004
)
ThrottleRPMTab ( 
0	600
12.5	693.75
25	787.5
37.5	881.25
50	975
62.5	1068.75
75	1162.5
87.5	1256.25
100	1350
)
DieselTorqueTab ( 
0	0
600	2109.89899
693.75	5445.820366
787.5	7987.474747
881.25	9988.351601
975	11604.444444
1068.75	12937.012228
1162.5	14054.649723
1256.25	15005.475652
1350	15824.242424
)
		MinOilPressure		( 43.5113psi ) #(* 3 bar comprovado em manual de conducao*)
		MaxOilPressure 		( 101.526psi ) #(* 7 bar comprovado em manual de conducao*)
		MaxTemperature 		( 95degC ) #(* comprovado em manual de conducao*)
		Cooling			( 3 ) #( 0=No cooling, 1=Mechanical, 2= Hysteresis, 3=Proportional )
		TempTimeConstant	( 720 )
		OptTemperature		( 73degC ) #(* comprovado em manual de conducao*)
		IdleTemperature		( 54.5degC )
	)
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
27.7776777	0
27.7777777	0
)
0.125	(
0	48542.9175
1	48542.9175
2	48542.9175
3.5	38929.911735
5	27250.938214
7	19464.955867
9	15139.410119
11.5	11848.234006
14	9732.477934
17	8014.981828
20	6812.734554
23.5	5798.07196
27	5046.47004
27.7776777	4905.186551
27.7777777	0
)
0.25	(
0	97085.835
1	97085.835
2	97085.835
3.5	91662.599539
5	64163.819677
7	45831.299769
9	35646.566487
11.5	27897.312903
14	22915.649885
17	18871.71167
20	16040.954919
23.5	13651.876527
27	11882.188829
27.7776777	11549.529153
27.7777777	0
)
0.375	(
0	145628.7525
1	145628.7525
2	145628.7525
3.5	145628.7525
5	109968.608616
7	78549.006155
9	61093.671454
11.5	47812.438529
14	39274.503077
17	32343.708417
20	27492.152154
23.5	23397.576301
27	20364.557151
27.7776777	19794.420866
27.7777777	0
)
0.5	(
0	194171.67
1	194171.67
2	194171.67
3.5	194171.67
5	163220.279147
7	116585.913676
9	90677.932859
11.5	70965.33876
14	58292.956838
17	48005.964455
20	40805.069787
23.5	34727.718967
27	30225.97762
27.7776777	29379.756096
27.7777777	0
)
0.625	(
0	242714.5875
1	242714.5875
2	242714.5875
3.5	242714.5875
5	223002.77622
7	159287.6973
9	123890.431233
11.5	96957.728791
14	79643.84865
17	65589.051829
20	55750.694055
23.5	47447.399196
27	41296.810411
27.7776777	40140.644338
27.7777777	0
)
0.75	(
0	291257.505
1	291257.505
2	291257.505
3.5	291257.505
5	288671.403896
7	206193.859926
9	160373.002164
11.5	125509.306042
14	103096.929963
17	84903.354087
20	72167.850974
23.5	61419.447637
27	53457.667388
27.7776777	51961.039907
27.7777777	0
)
0.875	(
0	339800.4225
1	339800.4225
2	339800.4225
3.5	339800.4225
5	339800.4225
7	256957.901455
9	199856.145576
11.5	156409.157408
14	128478.950728
17	105806.194717
20	89935.265509
23.5	76540.651497
27	66618.715192
27.7776777	64753.624461
27.7777777	0
)
1	(
0	388343.34
1	388343.34
2	388343.34
3.5	388343.34
5	388343.34
7	311306.94183
9	242127.621424
11.5	189491.181984
14	155653.470915
17	128185.211342
20	108957.429641
23.5	92729.727354
27	80709.207141
27.7776777	78449.63198
27.7777777	0
	)
)