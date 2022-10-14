\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\key d \minor
		R2.*3  |
		r4. r4 d' 8  |
%% 5
		d' 8 a' g' a' 4 f' 8  |
		g' 4. d'  |
		f' 4 f' 8 e' d' c'  |
		d' 4. d'  |
		g' 4 a' 8 bes' a' g'  |
%% 10
		a' 4. f'  |
		e' 4 f' 8 g' f' e'  |
		d' 4. d' ~  |
		d' 4. r4 d' 8  |
		d' 8 a' g' a' 4 f' 8  |
%% 15
		g' 4. d'  |
		f' 4 f' 8 e' d' c'  |
		d' 4. d'  |
		g' 4 a' 8 bes' a' g'  |
		a' 4. f'  |
%% 20
		e' 4 f' 8 g' f' e'  |
		d' 4. d' ~  |
		d' 4. r4 d' 8  |
		d' 8 a' g' a' 4 f' 8  |
		g' 4. d'  |
%% 25
		\override TextSpanner #'(bound-details left text) = "rit."
		f' 4 \startTextSpan f' 8 e' d' c'  |
		d' 4. d' -\fermata \stopTextSpan  |
		d' 4. e' 4 f' 8  |
		g' 4. ~ g' 4 r 8  |
		e' 4. f' 4 g' 8  |
%% 30
		a' 4. ~ a' 4 r 8  |
		bes' 4. e'  |
		a' 4. d' 4 r8  |
		g' 4. f' 4 g' 8  |
		a' 4. ~ a' 4 r 8  |
%% 35
		bes' 4. e'  |
		a' 4. d' 4 r8  |
		g' 4. f' 4 e' 8  |
		fis' 2.  |
		R2.  |
		\bar "|."
		} % Voice

	\new Lyrics \lyricsto "voz-soprano" {
		% "cordero de dios que quitas..."
		"Cor" -- "de" -- "ro" "de" "Dios," "que" "qui" -- "tas"
		"el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros." __
		% "cordero de dios que quitas..."
		"Cor" -- "de" -- "ro" "de" "Dios," "que" "qui" -- "tas"
		"el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros." __
		% "cordero de dios que quitas..."
		"Cor" -- "de" -- "ro" "de" "Dios," "que" "qui" -- "tas"
		"el" "pe" -- "ca" -- "do" "del" "mun" -- "do..."
		% "danos la paz..."
		"Da" -- "nos" "la" "paz," "da" -- "nos" "la" "paz."
		"Da" -- "nos," "da" -- "nos," "da" -- "nos" "la" "paz."
		"Da" -- "nos," "da" -- "nos," "da" -- "nos" "la" "paz."
	} % Lyrics

>> % Staff
