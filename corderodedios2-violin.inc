        \context Staff = "violin" << 
            \set Staff.instrumentName = "Violín"
            \set Staff.shortInstrumentName = "V."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voz-violin" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \time 6/8
                \clef "treble"
                \key d \minor
                a' 8 g' a' bes' 4.  |
                a' 8 g' f' g' 4.  |
                a' 8 g' a' bes' 4.  |
                a' 8 g' f' g' 4.  |
%% 5
                R2.*9  |
                d' 4. d' 8 e' f'  |
%% 15
                g' 2.  |
                f' 4. e' 8 d' c'  |
                d' 2.  |
                bes' 4. e'  |
                a' 4. d'  |
%% 20
                g' 4. f' 4 e' 8  |
                d' 2.  |
                r4. r8 r d'  |
                d' 8 a' g' a' 4 f' 8  |
                g' 4. d'  |
%% 25
                f' 4 f' 8 e' d' c'  |
                d' 4. d' -\fermata  |
                d' 4. e' 4 f' 8  |
                g' 2 r8 r  |
                e' 4. d' 4 e' 8  |
%% 30
                f' 4. f' 8 g' a'  |
                bes' 8-. [ g'-. e'-. cis'-. e'-. g'-. ]  |
                a' 8-. [ f'-. d'-. bes-. d'-. f'-. ]  |
                g' 8-. [ e'-. cis'-. a-. cis'-. e'-. ]  |
                f' 4 g' 8 a' 4.  |
%% 35
                bes' 8-. [ g'-. e'-. cis'-. e'-. g'-. ]  |
                a' 8-. [ f'-. d'-. bes-. d'-. f'-. ]  |
                g' 8-. [ e'-. cis'-. a-. cis'-. e'-. ]  |
                d' 2.  |
                \bar "|."
            } % Voice
        >> % Staff
