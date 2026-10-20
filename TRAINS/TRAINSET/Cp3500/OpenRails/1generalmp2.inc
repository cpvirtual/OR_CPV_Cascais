
	Size  ( 3.18m 4.32m 26.4m)
	WheelRadius ( 0.46m )
	NumWheels ( 4 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.12m/s )
		CouplingUniqueType ( "Scharfenberg 10" )
	)
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( -0.12m/s )
	)

	Mass ( 50.7t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 450.0mm )
	ORTSUnbalancedSuperElevation ( 180mm )

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
				ORTSInertia ( 2275 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.460m )
			)
		)
	)
	ORTSBearingType ( Low )
	Comment (Friction Calculator - Electric Loco - Modern Locomotives -  )
 	ORTSDavis_A ( 486.36 )
	ORTSDavis_B ( 17.75 )
	ORTSDavis_C ( 1.14 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 254kN )
	DerailBufferForce ( 400kN )
