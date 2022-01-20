RTU is a simple semi AI-like program that I wrote some time ago (not really sure as I do not have the original copy of the source code). It's main purpose is to
attempt to generate and analyze text-based artifacts and generate a block of string. 

There are different variants of this program as you can tell from the different folders.

Each folder represents a variant of RTU. Each symbolizes not an evolution but a different feature. 
For example,
RTU-tbi will generate a block-pool type lock. This can be identified by the blob of string chars on the bottom, and a few "keys" ontop.

Each key represents a block instruction for the algorithm. This key generation is handled by a master. The processor will thus be referred to 
as the "slave." The master first generates a key, a key most likely will contain X spaces and a letter representing the block to currently write. For example,
an "R" block will be written and processed to the slave as "7274 % 615 (char) "R""'s registry. This registry is however pretty complicated to get into, but just keep 
it in mind as a "library." For each of these keys, the processor rinse and repeat. When there are no more keys to generate (defined by the registries version), a EOT will be printed and the processor will then be able to pause and kill the process.

Other variants do not behave the same, while the tbi variant is technically the most "primitive" of these locks.

Take another example, rkli_point, however this one is pretty mathy, so I will save it for later.

For the most part, it's just for fun, however rtu is not part of any other programs nor any other platforms. This RTU implementation is different from
the subreddit's one. 

