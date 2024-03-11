[@mel.module "radix"] [@react.component]
external make:
  (
    ~htmlFor: string,
    ~asChild: bool=?,
    ~className: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Label";

