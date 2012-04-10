NOM = presentacion
DOC = $(NOM).tex

PDF = pdflatex --shell-escape
BIB = bibtex --shell-escape
LATEX = latex
DVI = dvipdf

pdf:
	$(PDF) $(DOC) && $(PDF) $(DOC)

latex: 
	$(LATEX) $(DOC) && $(LATEX) $(DOC)

#---------------------------------------------------------
# LIMPIEZA
clean: 
	$(RM) *.aux *.toc *.log \
	*.lof *.lot *.out *.bbl \
	*.blg *.nav *.vrb *.snm \
	*~ *\#
	$(RM) -r auto

clean-all:
	make clean
	$(RM) $(NOM).pdf
#---------------------------------------------------------
