        \context Staff = "soprano" << 
            \set Staff.instrumentName = "Soprano"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "soprano" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \time 6/8
                \clef "treble"
                \key f \major
                R2.*3  |
                r2 r8 d'  |
%% 5
                d' 8 a' g' \stemDown a' 4 \stemNeutral f' 8  |
                g' 4. d'  |
                f' 4 f' 8 e' d' c' |
                d' 4. d'  |
                g' 4 a' 8 bes' a' g'  |
%% 10
                a' 4. f'  |
                e' 4 f' 8 g' f' e'  |
                d' 4. d'  |
                r2 r8 d'  |
                d' 8 a' g' \stemUp a' 4 \stemNeutral f' 8  |
%% 15
                g' 4. d'  |
                f' 4 f' 8 e' d' c'  |
                d' 4. d'  |
                g' 4 a' 8 bes' a' g'  |
                a' 4. f'  |
%% 20
                e' 4 f' 8 g' f' e'  |
                d' 4. d'  |
                r2 r8 d'  |
                d' 8 a' g' \stemUp a' 4 \stemNeutral f' 8  |
                g' 4. d'  |
%% 25
                f' 4 f' 8 e' d' c'  |
                d' 4. d' -\fermata  |
                d' 4. e' 4 f' 8  |
                g' 2 r8 r  |
                e' 4. f' 4 g' 8  |
%% 30
                a' 2 r8 r  |
                < d' bes' > 4. e'  |
                < a' f' > 4. < f' d' >  |
                < g' d' > 4. < f' cis' > 4 < g' cis' > 8  |
                < a' d' > 2 r8 r  |
%% 35
                < d' bes' > 4. e'  |
                < a' f' > 4. < f' d' >  |
                < d' g' > 4. < a' e' > 4 < e' a' > 8  |
                < fis' a' > 2.  |
                \bar "|."
            } % Voice

	    \lyricsto "soprano" \new Lyrics \lyricmode {
		% "cordero de dios que quitas..."
		"Cor" "de" "ro" "de" "Dios," "que" "qui" "tas"
		"el" "pe" "ca" "do" "del" "mun" "do,"
		"ten" "pie" "dad" "de" "no" "so" "tros,"
		"ten" "pie" "dad" "de" "no" "so" "tros."
		% "cordero de dios que quitas..."
		"Cor" "de" "ro" "de" "Dios," "que" "qui" "tas"
		"el" "pe" "ca" "do" "del" "mun" "do,"
		"ten" "pie" "dad" "de" "no" "so" "tros,"
		"ten" "pie" "dad" "de" "no" "so" "tros."
		% "cordero de dios que quitas..."
		"Cor" "de" "ro" "de" "Dios," "que" "qui" "tas"
		"el" "pe" "ca" "do" "del" "mun" "do..."
		% "danos la paz..."
		"Da" "nos" "la" "paz," "da" "nos" "la" "paz."
		"Da" "nos," "da" "nos," "da" "nos" "la" "paz."
		"Da" "nos," "da" "nos," "da" "nos" "la" "paz."
	    } % Lyrics

        >> % Staff
