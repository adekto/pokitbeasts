map = require "overworld256"

out = io.open("POKBEAST.DAT", "wb")
if out == nil then
	print("idk")
else
	for i,v in ipairs(map.layers[1].data) do
		out:write(string.char(v))
	end
	out:close()
end

