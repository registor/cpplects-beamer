# 该 Makefile 用于编译一个 Beamer 制作的幻灯片
# 运行环境：Linux、texlive2014(XeTeX)、evince 阅读器

Compiler = xelatex -shell-escape -interaction=nonstopmode
Reader = evince

Target = main.pdf
Source = main.tex
TmpFile = *.out *.log *.aux *.nav *.snm *.toc *.vrb *.pyg *.nav *.toc

$(Target): $(Source)
	$(Compiler) $(Source)
	$(Compiler) $(Source)

all: $(Target) clean read 

read:
	$(Reader) $(Target)

clean:
#	-rm -r $(TmpFile)
	find . -name "*.out"  | xargs rm -f
	find . -name "*.log"  | xargs rm -f
	find . -name "*.aux"  | xargs rm -f
	find . -name "*.nav"  | xargs rm -f
	find . -name "*.snm"  | xargs rm -f
	find . -name "*.toc"  | xargs rm -f
	find . -name "*.vrb"  | xargs rm -f
	find . -name "*.pyg"  | xargs rm -f
	find . -name "*.nav"  | xargs rm -f
	find . -name "*.atfi"  | xargs rm -f
	find . -name "*.toc"  | xargs rm -f
	find  -name "*.*~"  | xargs rm -f
	find  -name "*~"  | xargs rm -f
cleanall:
	-rm -r $(TmpFile) $(Target)

.PHONY: all read clean cleanall
