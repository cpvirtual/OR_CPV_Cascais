
	Size  ( 3.17m 3.87m 17.59m )
	Mass ( 78t )
	WheelRadius ( 0.570m )
	NumWheels ( 4 )

Comment( ****************** Coupler Information ******************* )
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( 0.12m/s )
	)
	Coupling (
		Type ( Chain )
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1e6N/m/s 1e6N/m/s )
			Break ( 1200kN 1200kN )
			r0 ( 6cm 9cm )
		)
		CouplingHasRigidConnection ()
		Velocity ( -0.12m/s )
	)
	Buffers (
		Spring (
			Stiffness ( 1e6N/m 5e6N/m )
			Damping ( 1.3e6N/m/s 3.8e6N/m/s )
			r0 ( 0m 1e9 )
		)
		Centre ( 0.5m )
		Radius ( 1m )
		Angle ( 0.5deg )
	)

Comment ( *** Curve Resistance & SuperElevation ***)
	CentreOfGravity ( 0.0m 1.6m 0.0m )
	ORTSTrackGauge ( 1.0m 668.0mm )
	ORTSRigidWheelbase ( 2.0m 200.0mm )
	ORTSUnbalancedSuperelevation ( 180mm )


Comment( *********************** Friction / Adhesion ************************* )
	ORTSAdhesion (
		ORTSCurtis_Kniffler ( 7.5 44 0.161 0.7 )
	)
	ORTSAdhesion (
		ORTSSlipWarningThreshold ( 70 )
	)
	ORTSAdhesion (
		Wheelset (
			Axle (
				ORTSInertia ( 3633 ) comment ( valor por defeito. calcular mais tarde)
				ORTSRadius ( 0.570m )
			)
		)
	)
	ORTSBearingType ( Roller )
 	Comment (Friction Calculator - Electric Loco - Modern Locomotives - 78;3,057;4,3;16,2;4 )
	ORTSDavis_A ( 603.26 )
	ORTSDavis_B ( 27.30 )
	ORTSDavis_C ( 0.94 ) comment ( for non-leading vehicles )
	ORTSAntislip ( 0 )
	DerailRailHeight ( 4cm )
	DerailRailForce ( 390kN )
	DerailBufferForce ( 400kN )
