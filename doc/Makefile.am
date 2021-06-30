# The man and info pages for bison (not bison++)
# were not installed by the previous make system.
dist_man1_MANS = \
	bison++.1
dist_noinst_MANS = \
	bison.1
noinst_TEXINFOS = \
	bison.texi

# FIXME:  `texi2dvi bison.texi` seems to be broken.
# Uncomment to keep `make distcheck` happy.
#.PHONY: dvi
#dvi:

# Generate the man page from its .dman source file.
# The dman utility is a parser from the flex++/bison++ examples.
%: %.dman
	$(AM_V_GEN)dman < $*.dman > $@

# FIXME:  For some reason automake isn't distributing the noinst files,
# so place them in EXTRA_DIST to force their inclusion.
EXTRA_DIST = \
	REFERENCES \
	bison++.1.dman \
	$(dist_noinst_MANS) \
	$(noinst_TEXINFOS)
