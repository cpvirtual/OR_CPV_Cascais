
	Size ( 2.92m 3.653m 25.9m )
	WheelRadius ( 0.445m )
	NumWheels ( 4 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e7N/m 1e7N/m )
			Damping ( 0.2e7N/m/s 0.2e7N/m/s )
			Break ( 1e7N 1e7N )
			r0 ( 10cm 1e9 )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.1m/s )
		CouplingUniqueType ( "Dellner 845" )
	)

	Mass ( 49.071t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 700.0mm )
	ORTSUnbalancedSuperElevation ( 210mm )

Comment( *********************** Pantographs ************************* )
	ORTSPantographs(
		Pantograph(
			Delay( 5s )
		)
		Pantograph(
			Delay( 5s )
		)
	)

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion ( ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 ) )
		Wheelset (
			Axle (
				ORTSInertia ( 2202 ) comment ( mass*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.445m )
			)
		)
	)
	ORTSBearingType ( Low )
	Comment (Darwin Smith Friction Calculator AGO17 - High Speed Trains - 49,071;2,92;3,653;25;4 )
	ORTSDavis_A ( 665 )
	ORTSDavis_B ( 5.871104 )  Comment (* ORTS Friction *)
	ORTSDavis_C ( 0.85 )
	ORTSWagonFrontalArea ( 9.12m^2 ) Comment (* Estimate based on dimensions *)
	ORTSDavisDragConstant ( 0.00039 )
	ORTSStandstillFriction ( 818.080123 ) Comment (* ORTS Friction *)
	ORTSMergeSpeed ( 0.240755 ) Comment (* ORTS Friction *)
	Antislip ( 1 ) Comment (* Anti skid braking not supported in OR *)
	DerailRailHeight ( 4cm )
	DerailRailForce ( 245kN )
	DerailBufferForce ( 400kN )
