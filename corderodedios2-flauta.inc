\context Staff = "track 5" <<
	\set Staff.instrumentName = "Flauta"
	\set Staff.shortInstrumentName = "F."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 3" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\key d \minor
		f' 8 e' f' g' 4.  |
		f' 8 e' d' e' 4.  |
		f' 8 e' f' g' 4.  |
		f' 8 e' d' e' 4.  |
%% 5
		R2.*9  |
		d' 4. d' 8 e' f'  |
%% 15
		g' 2.  |
		f' 4. e' 8 d' c'  |
		d' 2.  |
		d' 4. d'  |
		f' 4. f'  |
%% 20
		e' 4. d' 4 cis' 8  |
		d' 2.  |
		r2 r8 d' 8  |
		d' 8 a' g' a' 4 f' 8  |
		g' 4. d'  |
%% 25
		\override TextSpanner #'(bound-details left text) = "rit."
		f' 4 \startTextSpan f' 8 e' d' c'  |
		d' 4. d' -\fermata \stopTextSpan  |
		d' 4. e' 4 f' 8  |
		g' 2 r4  |
		e' 4. d' 4 e' 8  |
%% 30
		f' 4. a' 8 bes' c''  |
		d'' 8-. [ bes'-. g'-. e'-. g'-. bes'-. ]  |
		c'' 8-. [ a'-. f'-. d'-. f'-. a'-. ]  |
		bes' 8-. [ g'-. e'-. cis'-. e'-. g'-. ]  |
		a' 4 bes' 8 c'' 4.  |
%% 35
		d'' 8-. [ bes'-. g'-. e'-. g'-. bes'-. ]  |
		c'' 8-. [ a'-. f'-. d'-. f'-. a'-. ]  |
		bes' 8-. [ g'-. e'-. cis'-. e'-. g'-. ]  |
		d' 2.  |
		R2.  |
		\bar "|."
	} % Voice
>> % Staff
