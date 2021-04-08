 $p = (Get-Item .\node_modules\tree-sitter-cli).FullName
 $env:PATH += ";$p"
 function gen() {
   tree-sitter.exe generate
 }
function test() {
  tree-sitter.exe test
}
