# Copyright (c) 2015, Robert Escriva
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
#     * Redistributions of source code must retain the above copyright notice,
#       this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in the
#       documentation and/or other materials provided with the distribution.
#     * Neither the name of this project nor the names of its contributors may
#       be used to endorse or promote products derived from this software
#       without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
# FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
# SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
# CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

AM_CPPFLAGS = -I${abs_top_srcdir}/include
AM_CFLAGS    = -fvisibility=hidden $(WANAL_CFLAGS)
if MAKE_NO_PRINT_DIRECTORY
AM_MAKEFLAGS = --no-print-directory
endif

EXTRA_DIST  =
EXTRA_DIST += LICENSE

th_sources = test/th_main.cc test/th.cc test/th.h

include_HEADERS = include/redupe.h
noinst_HEADERS = redupe-internal.h

lib_LTLIBRARIES = libredupe.la

libredupe_la_SOURCES = redupe.c

bin_PROGRAMS = redupe fecsum

redupe_SOURCES = redupe-cli.c
redupe_LDADD = libredupe.la -lpopt -lm

fecsum_SOURCES = fecsum-cli.c
fecsum_LDADD = libredupe.la -lpopt -lm

install-exec-hook:
	ln $(DESTDIR)$(bindir)/redupe$(EXEEXT) \
	   $(DESTDIR)$(bindir)/reundupe$(EXEEXT)

uninstall-hook:
	unlink $(DESTDIR)$(bindir)/reundupe$(EXEEXT)

check_PROGRAMS =
check_PROGRAMS += test/gf_sub
check_PROGRAMS += test/gf_mul
check_PROGRAMS += test/gf_div
check_PROGRAMS += test/gf_inv
check_PROGRAMS += test/gf_pow
check_PROGRAMS += test/gf_poly_add
check_PROGRAMS += test/gf_poly_mul
check_PROGRAMS += test/gf_poly_div
check_PROGRAMS += test/gf_poly_scale
check_PROGRAMS += test/gf_poly_eval
check_PROGRAMS += test/generator_poly
check_PROGRAMS += test/encode_msg
check_PROGRAMS += test/calc_syndromes
check_PROGRAMS += test/find_error_locator
check_PROGRAMS += test/find_errors
check_PROGRAMS += test/find_errata_locator
check_PROGRAMS += test/find_error_evaluator
check_PROGRAMS += test/correct_errata
check_PROGRAMS += test/correct_msg

TESTS = ${check_PROGRAMS}

test_gf_sub_SOURCES = test/gf_sub.cc ${th_sources}
test_gf_sub_LDADD = libredupe.la
test_gf_sub_LDFLAGS = -static-libtool-libs

test_gf_mul_SOURCES = test/gf_mul.cc ${th_sources}
test_gf_mul_LDADD = libredupe.la
test_gf_mul_LDFLAGS = -static-libtool-libs

test_gf_div_SOURCES = test/gf_div.cc ${th_sources}
test_gf_div_LDADD = libredupe.la
test_gf_div_LDFLAGS = -static-libtool-libs

test_gf_inv_SOURCES = test/gf_inv.cc ${th_sources}
test_gf_inv_LDADD = libredupe.la
test_gf_inv_LDFLAGS = -static-libtool-libs

test_gf_pow_SOURCES = test/gf_pow.cc ${th_sources}
test_gf_pow_LDADD = libredupe.la
test_gf_pow_LDFLAGS = -static-libtool-libs

test_gf_poly_add_SOURCES = test/gf_poly_add.cc ${th_sources}
test_gf_poly_add_LDADD = libredupe.la
test_gf_poly_add_LDFLAGS = -static-libtool-libs

test_gf_poly_mul_SOURCES = test/gf_poly_mul.cc ${th_sources}
test_gf_poly_mul_LDADD = libredupe.la
test_gf_poly_mul_LDFLAGS = -static-libtool-libs

test_gf_poly_div_SOURCES = test/gf_poly_div.cc ${th_sources}
test_gf_poly_div_LDADD = libredupe.la
test_gf_poly_div_LDFLAGS = -static-libtool-libs

test_gf_poly_scale_SOURCES = test/gf_poly_scale.cc ${th_sources}
test_gf_poly_scale_LDADD = libredupe.la
test_gf_poly_scale_LDFLAGS = -static-libtool-libs

test_gf_poly_eval_SOURCES = test/gf_poly_eval.cc ${th_sources}
test_gf_poly_eval_LDADD = libredupe.la
test_gf_poly_eval_LDFLAGS = -static-libtool-libs

test_generator_poly_SOURCES = test/generator_poly.cc ${th_sources}
test_generator_poly_LDADD = libredupe.la
test_generator_poly_LDFLAGS = -static-libtool-libs

test_encode_msg_SOURCES = test/encode_msg.cc ${th_sources}
test_encode_msg_LDADD = libredupe.la
test_encode_msg_LDFLAGS = -static-libtool-libs

test_calc_syndromes_SOURCES = test/calc_syndromes.cc ${th_sources}
test_calc_syndromes_LDADD = libredupe.la
test_calc_syndromes_LDFLAGS = -static-libtool-libs

test_find_error_locator_SOURCES = test/find_error_locator.cc ${th_sources}
test_find_error_locator_LDADD = libredupe.la
test_find_error_locator_LDFLAGS = -static-libtool-libs

test_find_errors_SOURCES = test/find_errors.cc ${th_sources}
test_find_errors_LDADD = libredupe.la
test_find_errors_LDFLAGS = -static-libtool-libs

test_find_errata_locator_SOURCES = test/find_errata_locator.cc ${th_sources}
test_find_errata_locator_LDADD = libredupe.la
test_find_errata_locator_LDFLAGS = -static-libtool-libs

test_find_error_evaluator_SOURCES = test/find_error_evaluator.cc ${th_sources}
test_find_error_evaluator_LDADD = libredupe.la
test_find_error_evaluator_LDFLAGS = -static-libtool-libs

test_correct_errata_SOURCES = test/correct_errata.cc ${th_sources}
test_correct_errata_LDADD = libredupe.la
test_correct_errata_LDFLAGS = -static-libtool-libs

test_correct_msg_SOURCES = test/correct_msg.cc ${th_sources}
test_correct_msg_LDADD = libredupe.la
test_correct_msg_LDFLAGS = -static-libtool-libs
