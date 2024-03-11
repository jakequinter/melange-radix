[@mel.module "radix"] [@react.component]
external make:
  (~htmlFor: string, ~asChild: bool=?, ~className: string=?) => React.element =
  "Label";
