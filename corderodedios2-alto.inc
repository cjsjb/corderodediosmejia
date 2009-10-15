        \context Staff = "track 3" << 
            \set Staff.instrumentName = "Alto"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 2" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \time 6/8
                \clef "bass"
                \key f \major
                R2.*3  |
                r2 r8 d  |
%% 5
                d 8 a g \stemDown a 4 \stemNeutral f 8  |
                g 4. d  |
                f 4 f 8 e d c  |
                d 4. d  |
                g 4 a 8 bes a g  |
%% 10
                a 4. f  |
                e 4 f 8 g f e  |
                d 4. d  |
                R2.*9  |
                r2 r8 d  |
                d 8 a g \stemDown a 4 \stemNeutral f 8  |
                g 4. d  |
%% 25
                f 4 f 8 e d c  |
                d 4. d -\fermata  |
                d 4. e 4 f 8  |
                g 2 r8 r  |
                e 4. f 4 g 8  |
%% 30
                a 2 r8 r  |
                < bes d' > 4. < e cis' > 8 d' e'  |
                < a d' > 4. < d' d >  |
                < g d' > 4. < cis' f > 4 < g cis' > 8  |
                < a d' > 2 r8 r  |
%% 35
                < bes d' > 4. < cis' e > 8 d' e'  |
                < a d' > 4. < d' d >  |
                < d' g > 4. < cis' e > 4 < cis' e > 8  |
                < d d' > 2.  |
                \bar "|."
            } % Voice
        >> % Staff
