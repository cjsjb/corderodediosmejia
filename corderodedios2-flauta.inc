        \context Staff = "track 5" << 
            \set Staff.instrumentName = "Flauta"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 3" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \time 6/8
                \clef "treble"
                \key f \major
                \stemDown f'' 8 e'' f'' g'' 4. \stemNeutral  |
                f'' 8 e'' d'' \stemUp e'' 4. \stemNeutral  |
                f'' 8 e'' f'' g'' 4.  |
                f'' 8 e'' d'' \stemUp e'' 4. \stemNeutral  |
%% 5
                R2.*9  |
                d'' 4. \stemDown d'' 8 e'' f'' \stemNeutral  |
%% 15
                g'' 2.  |
                f'' 4. e'' 8 d'' c''  |
                d'' 2.  |
                bes'' 4. e''  |
                a'' 4. d''  |
%% 20
                g'' 4. f'' 4 e'' 8  |
                d'' 2.  |
                r2 r8 d''  |
                \stemDown d'' 8 a'' g'' a'' 4 \stemNeutral f'' 8  |
                g'' 4. d''  |
%% 25
                f'' 4 \stemDown f'' 8 e'' d'' c'' \stemNeutral  |
                d'' 4. d'' -\fermata  |
                d'' 4. e'' 4 f'' 8  |
                g'' 2 r8 r  |
                e'' 4. d'' 4 e'' 8  |
%% 30
                f'' 4. f'' 8 g'' a''  |
                bes'' 16[ r g'' r e'' r des'' r e'' r g''] r |
                a'' 16[ r f'' r d'' r bes' r d'' r f''] r |
                g'' 16[ r e'' r des'' r a' r des'' r e''] r |
                f'' 4 g'' 8 a'' 4.  |
%% 35
                bes'' 16[ r g'' r e'' r des'' r e'' r g''] r  |
                a'' 16[ r f'' r d'' r bes' r d'' r f''] r  |
                g'' 16[ r e'' r des'' r a' r des'' r e''] r  |
                d'' 2.  |
                \bar "|."
            } % Voice
        >> % Staff
