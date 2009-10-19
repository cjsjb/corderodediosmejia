\include "corderodedios2-encabezado.inc"

\score {
    \new StaffGroup <<

        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0
	\override Score.MetronomeMark #'padding = #8.0

	\include "corderodedios2-acordes.inc"
	\include "corderodedios2-soprano.inc"
	%\include "corderodedios2-alto.inc"
	%\include "corderodedios2-flauta.inc"

    >> % notes

    \layout { }
} % score
