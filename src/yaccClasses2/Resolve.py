import Token
import Rule
import difflib

from Handler.BasicHandler import Check as BasicCheck
from Handler.ListHandler import Check as ListCheck

def resolve(rule):
	handler=ListCheck(rule)
	if handler:
		rule.handler=handler
		return

	handler=BasicCheck(rule)
	if handler:
		rule.handler=handler
		return
	raise ValueError
			

