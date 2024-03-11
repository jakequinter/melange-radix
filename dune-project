(lang dune 3.11)

(using melange 0.1)

(name melange-radix)

(source
 (github jakequinter/melange-radix))

(maintainers "Jake Quinter")

(license MIT)

(package
 (name melange-radix)
 (synopsis "Enter a synopsis of your app here")
 (description "Enter a description of your app here")
; Allows the package to be empty, which can be useful during development.
 (allow_empty) 
; Lists the dependencies of the package along with version constraints.
 (depends
  (dune (>= 3.11))
  (melange (>= 2.1.0))
  (ocaml (>= 5.1.0))
  ppx_deriving
  (reason (>= 3.10.0))
  (reason-react (>= 0.13.0))
  reason-react-ppx
))
