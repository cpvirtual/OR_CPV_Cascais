
	Size  ( 3.18m 4.32m 26.4m)
	WheelRadius ( 0.425m )
	NumWheels ( 4 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Bar )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 600kN 600kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.12m/s )
	)

	Mass ( 40.7t )
Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.2m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 400.0mm )
	ORTSUnbalancedSuperElevation ( 180mm )

Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion ( ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
		ORTSSlipWarningThreshold ( 70 ) )
		Wheelset (
			Axle (
				ORTSInertia ( 1826 ) comment comment ( 40,7*1016,0469088*0,20*0,4699^2 )
				ORTSRadius ( 0.425m )
			)
		)
	)
	ORTSBearingType ( Low )
	Comment (Friction Calculator - Electric Loco - Modern Locomotives -  )
 	ORTSDavis_A ( 431.73 )
	ORTSDavis_B ( 14.37 )
	ORTSDavis_C ( 1.11 )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 204kN )
	DerailBufferForce ( 400kN )
