\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\key d \minor
		R2.*3  |
		r4. r4 d' 8  |
%% 5
		d' 8 a' g' a' 4 f' 8  |
		e' 4. d'  |
		d' 4 d' 8 e' d' c'  |
		a 4. a  |
		g' 4 g' 8 g' f' e'  |
%% 10
		f' 4. d'  |
		cis' 4 d' 8 e' d' cis'  |
		a 4. a ~  |
		a 4. r4 d' 8  |
		d' 8 a' g' a' 4 f' 8  |
%% 15
		e' 4. d'  |
		d' 4 d' 8 e' d' c'  |
		a 4. a  |
		g' 4 g' 8 g' f' e'  |
		f' 4. d'  |
%% 20
		cis' 4 d' 8 e' d' cis'  |
		a 4. a ~  |
		a 4. r4 d' 8  |
		d' 8 a' g' a' 4 f' 8  |
		e' 4. d'  |
%% 25
		\override TextSpanner #'(bound-details left text) = "rit."
		d' 4 \startTextSpan d' 8 e' d' c'  |
		a 4. a -\fermata \stopTextSpan  |
		d' 4. e' 4 f' 8  |
		e' 4. ( d' 4 ) r8  |
		cis' 4. d' 4 e' 8  |
%% 30
		d' 2 ~ d' 8 r  |
		r8 e' ( f' ) g' ( f' e' )  |
		r8 d' ( e' ) f' ( e' d' )  |
		r8 cis' ( d' ) e' ( d' ) cis'  |
		d' 4 ( e' 8 fis' 4. )  |
%% 35
		r8 e' ( f' ) g' ( f' e' )  |
		r8 d' ( e' ) f' ( e' d' )  |
		r8 cis' ( d' ) e' ( d' ) cis'  |
		d' 2.  |
		R2.  |
		\bar "|."
		}

	\lyricsto "mezzo" \new Lyrics \lyricmode {
		% "cordero de dios que quitas..."
		"Cor" -- "de" -- "ro" "de" "Dios," "que" "qui" -- "tas"
		"el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros."
		% "cordero de dios que quitas..."
		"Cor" -- "de" -- "ro" "de" "Dios," "que" "qui" -- "tas"
		"el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros."
		% "cordero de dios que quitas..."
		"Cor" -- "de" -- "ro" "de" "Dios," "que" "qui" -- "tas"
		"el" "pe" -- "ca" -- "do" "del" "mun" -- "do..."
		% "danos la paz..."
		"Da" -- "nos" "la" "paz," "da" -- "nos" "la" "paz."
		"Da" -- "nos," "da" -- "nos," "da" -- "nos" "la" "paz."
		"Da" -- "nos," "da" -- "nos," "da" -- "nos" "la" "paz."
	}
>>
