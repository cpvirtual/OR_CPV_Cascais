
Lights	( 7
		Light	(
			comment( Sphere of light )
			Type	( 1 )
			Conditions	(
				Headlight ( 3 )
				Unit ( 2 )
				)
			Cycle		( 0 )
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			States	(	1
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
			comment( Front bottom right light bright )
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
					Position ( -0.9 1.65 13.15 )
					Azimuth ( 0.0 0 0 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		Light	(
			comment( Front bottom left light bright )
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
					Position ( 0.9 1.65 13.15 )
					Azimuth ( 0.0 0 0 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)			

		Light	(
			comment( Front bottom right light dim )
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
					Position ( -0.9 1.65 13.15 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
		Light	(
			comment( Front bottom left light dim )
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
					Position ( 0.9 1.65 13.15 )
					Azimuth ( 0.0 0.0 0.0 )
					Transition ( 0 )
					Radius ( 1.0 )
					)
				)
			)
                 Light	(
			comment( Head rear outer left red dim )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 3 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( 0.9 1.65 -13.15 )
					Azimuth ( 0.0 0.0 180.0 )
					Transition ( 0 )
					Radius ( 0.60 )
					Elevation ( -50 -50 -50 )
					)
				)
			)
                Light	(
			comment( Head rear outer right red dim )
			Type		( 0 )
			Conditions	(
				Headlight ( 2 )
				Unit ( 3 )
				)
			FadeIn	( 0.5 )
			FadeOut	( 0.5 )
			Cycle	( 0 )
			States	(	1
				State	(
					Duration ( 0.0 )
					LightColour ( 80ff0000 )
					Position ( -0.9 1.65 -13.15 )
					Azimuth ( 0.0 0.0 180.0 )
					Transition ( 0 )
					Radius ( 0.60 )
					Elevation ( -50 -50 -50 )
					)
				)
			)	
		)
		