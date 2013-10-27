#-*- coding: UTF-8


def unidata_strip(s):
	s = s.strip()

	if unidata_comment(s):
		return ''

	i = s.find('#')
	if i > 0:
		s = s[:i]
	return s


def unidata_split(s):
	s = unidata_strip(s)
	return filter(bool, map(str.strip, s.split(' ')))


def unidata_comment(line):
	return (not line or not line.strip() or line[0] == '#')
