\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 2.*4

	% Cordero de Dios... ten piedad...
	\mark \default
	\skip 2.*4
	\skip 2.*5

	% Cordero de Dios... ten piedad...
	\mark \default
	\skip 2.*4
	\skip 2.*5

	% Cordero de Dios...
	\mark \default
	\skip 2.*4

	% Danos la paz...
	\mark \default
	\skip 2.*4
	\skip 2.*4
	%\skip 2.*1
}
