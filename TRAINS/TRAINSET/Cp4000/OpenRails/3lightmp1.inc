
	Lights	( 5
		Light	(
			comment( Sphere of light )
			Type		( 1 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			Cycle	( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.0 3.5 18 )
					Transition ( 0 )
					Radius ( 400.0 )
					Angle ( 15.0 )
					)
				)
			)
		Light	(
			comment( top right bright)
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( -0.17 3.35 6.36 )
					Azimuth ( -5.0 -5.0 -5.0 )
					Transition ( 0 )
					Radius ( 0.55 )
					Elevation ( -50 -50 -50 )
					)
				)
			)
		
		Light	(
			comment( top left bright)
			Type		( 0 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.15 3.35 6.35 )
					Azimuth ( -5.0 -5.0 -5.0 )
					Transition ( 0 )
					Radius ( 0.45 )
					Elevation ( -50 -50 -50 )
					)
				)
			)

		Light	(
			comment( luzes de baixo right bright )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( -0.72 1.90 7.88 )
					Azimuth ( -5.0 -5.0 -5.0 )
					Transition ( 0 )
					Radius ( 0.45 )
					Elevation ( -50 -50 -50 )
					)
				)
			)
		Light	(
			comment( luzes de baixo left bright )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 2 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	( 1
				State	(
					Duration ( 0.0 )
					LightColour ( ffffffff )
					Position ( 0.65 1.90 7.92 )
					Azimuth ( -5.0 -5.0 -5.0 )
					Transition ( 0 )
					Radius ( 0.55 )
					Elevation ( -50 -50 -50 )
					)
				)
			)
		)
		