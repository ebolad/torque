PROG_ROOT = ../..

AM_CFLAGS = -g -DTEST_FUNCTION -I${PROG_ROOT}/ -I${PROG_ROOT}/${PBS_MACH} --coverage

lib_LTLIBRARIES = libnet_set_clse.la

AM_LDFLAGS = @CHECK_LIBS@ ${lib_LTLIBRARIES}

check_PROGRAMS = test_net_set_clse

libnet_set_clse_la_SOURCES = scaffolding.c ${PROG_ROOT}/net_set_clse.c
libnet_set_clse_la_LDFLAGS = @CHECK_LIBS@ -shared -lgcov

test_net_set_clse_SOURCES = test_net_set_clse.c

check_SCRIPTS = coverage_run.sh

TESTS = ${check_PROGRAMS} coverage_run.sh

coverage_run.sh:
	echo 'cp -p .libs/net_set_clse.gc* . >/dev/null 2>&1' > $@
	echo 'RESULTS=($$(gcov net_set_clse.gcda))' >> $@
	echo 'PARSED_RESULT="TOTALCOV -- $${RESULTS[1]}: Lines($${RESULTS[5]})- $${RESULTS[3]}"' >> $@
	echo 'echo -e "\033[40m\033[1;33m$$PARSED_RESULT\033[0m"' >> $@
	chmod +x $@

CLEANFILES = coverage_run.sh *.gcno *.gcda *.gcov core *.lo
