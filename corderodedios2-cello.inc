\context Staff = "cello" <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "C."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1
		\override TextSpanner #'(bound-details left text) = "rit."

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\time 6/8
		\clef "bass"
		\key d \minor
		d 4. e  |
		f 4. e  |
		f 4. g  |
		f 4. e  |
%% 5
		d 2 e 8 f  |
		g 2 f 8 e  |
		bes, 4. c  |
		d 2 d 8 c  |
		g, 2 g, 4  |
%% 10
		d 2 d 8 c  |
		a, 2 cis 8 e  |
		d 4. e  |
		f 4. e  |
		d 2 e 8 f  |
%% 15
		g 2 f 8 e  |
		bes, 4. c  |
		d 2 d 8 c  |
		g, 2 g, 4  |
		d 2 d 8 c  |
%% 20
		a, 2 cis 8 e  |
		d 4. e  |
		f 4. e  |
		d 2 e 8 f  |
		g 2 g 8 a  |
%% 25
		bes 4. \startTextSpan c'  |
		d' 4. a 8. d -\fermata \stopTextSpan  |
		R2.  |
		g, 2.  |
		a, 2.  |
%% 30
		d 4 e 8 fis 4.  |
		g 4. a  |
		d 4. e 4 f 8  |
		g 4. a  |
		d 4 e 8 fis 4.  |
%% 35
		g 4. a  |
		d 4. e 4 f 8  |
		g 4. a  |
		d' 2 d' 8 a  |
		d 2.  |
		\bar "|."
	}
>>
